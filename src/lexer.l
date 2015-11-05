/*
 * lexer.l
 *	created by Rubem Kalebe (2015).
 *
 * Especificacoes lex da linguagem Samekh.
 */

%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"

int	octal(char *str);

int	hex(char *str);

void multLineComment(); // foi substituida pela regex

void lineComment(); // foi substituida pela regex
%}

%option yylineno

%%

"if"						return IF;
"elsif"					return ELSIF;
"else"					return ELSE;
"while"					return WHILE;
"for"						return FOR;
"return"				return RETURN;
"procedure"			return PROCEDURE;
"function"			return FUNCTION;
"endcase"				return END_CASE;
"endenum"				return END_ENUM;
"endfor"				return END_FOR;
"endfunction"		return END_FUNCTION;
"endif"					return END_IF;
"endprocedure"	return END_PROCEDURE;
"endstruct"			return END_STRUCT;
"endunion"			return END_UNION;
"endwhile"			return END_WHILE;
"break"					return BREAK;
"continue"			return CONTINUE;
"do"						return DO;
"case"					return CASE;
"when"					return WHEN;
"const"					return CONST;
"static"				return STATIC;
"sizeof"				return SIZEOF;
"typeof"				return TYPEOF;
"print"					return PRINT;
"println"				return PRINTLN;
"read"					return READ;
"null"					return NNULL;

"true"					return TRUE;
"false"					return FALSE;

"auto"					return AUTO;
"bool"					return BOOL;
"byte"					return BYTE;
"char"					return CHAR;
"double"				return DOUBLE;
"enum"					return ENUM;
"float"					return FLOAT;
"int"						return INT;
"long"					return LONG;
"short"					return SHORT;
"string"				return STRING;
"struct"				return STRUCT;
"union"					return UNION;

"("							return LPAREN;
")"							return RPAREN;
"["							return LSQPAREN;
"]"							return RSQPAREN;
"{"							return LBRACE;
"}"							return RBRACE;

";"							return SEMICOLON;
"."							return DOT;
","							return COMMA;

"="							return ASSIGN;
"<"							return LT;
">"							return GT;
"<="						return LET;
">="						return GET;
"=="						return OP_EQ;
"!="						return OP_NE;
"+"							return PLUS;
"-"							return MINUS;
"*"							return ASTERISK;
"/"							return DIV;
"%"							return MOD;
"+="						return ASSIGN_PLUS;
"-="						return ASSIGN_MINUS;
"*="						return ASSIGN_PRODUCT;
"/="						return ASSIGN_DIV;
"%="						return ASSIGN_MOD;
"!"							return LOG_NOT;
"&&"						return LOG_AND;
"||"						return LOG_OR;
"&&&"						return LOG_SC_AND;
"|||"						return LOG_SC_OR;
"~"							return BITWISE_COMPLEMENT;
"&"							return AMPERSAND;
"&="						return ASSIGN_BITWISE_AND;
"|"							return BITWISE_OR;
"|="						return ASSIGN_BITWISE_OR;
"^"							return BITWISE_OR_EXC;
"^="						return ASSIGN_BITWISE_OR_EXC;
"<<"						return L_SHIFT;
"<<="						return ASSIGN_L_SHIFT;
">>"						return R_SHIFT;
">>="						return ASSIGN_R_SHIFT;
"->"						return OP_PTR;

[_a-zA-Z][_a-zA-Z0-9]* {
	return checkType();
}

[+-]?0[0-7]+ {
	yylval.iValue = octal(yytext);
	return OCTAL;
}

[+-]?[0-9]+	{
	yylval.iValue = atoi(yytext);
	return DECIMAL;
}

[+-]?0[xX][0-9a-fA-F]+ {
	yylval.iValue = hex(yytext);
	return HEX;
}

[+-]?[0-9]+([.][0-9]+)?([eE][+-]?[0-9]+)? {
	yylval.iValue = atof(yytext);
	return FLOATING_POINT;
}

\"(\\.|[^"])*\" {
	/* Uma string começa com '"' seguida de qualquer numero de caracteres que nao sao '"'
			ou sao uma \ seguida de um caractere, e termina com '"' */

	yylval.sValue = yytext;
	return STRING_LITERAL;
}

[+-]?[0-9]+[_a-zA-Z0-9]+ {
	fprintf(stderr, "Incorrect integer or identifier '%s' at line %d.\n", yytext, yylineno);
}

\/\/[^\n]*\n 																	{ /* do nothing */ }

[ \t]*																				{ /* do nothing */ }

[\n]																					{ /* do nothing */ }

\/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+\/ 	{ /* do nothing */ }

. {
	fprintf(stderr, "Bad input '%s' at line %d.\n", yytext, yylineno);
}
%%

int yywrap(void){
	return 1;
}

/* Rotina para conversao de octal->decimal */
int octal(char *str) {
	int num;
	(void) sscanf(str, "%o", &num);
	return num;
}

/* Rotina para conversao de hex->decimal */
int hex(char *str) {
	int num;
	(void) sscanf(str+2, "%x", &num);
	return num;
}

int checkType() {
	// ajeitar
	return 400;
}


/* Rotina para ignorar comentarios de multiplas linhas */
void multLineComment() {
	char c;
loop:
	while((c = input()) != '*' && c != 0)
		;
	if((c = input()) != '/' && c != 0) {
		goto loop;
	}
}

/* Rotina para ignorar comentarios de uma unica linha */
void lineComment() {
	char c;
	while((c = input()) != '\n' && c != 0)
		;
}
