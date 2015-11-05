%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"

int	octal(char *str);

int	hex(char *str);

void multLineComment();

void lineComment();
%}

%option yylineno

%%

"if"				return IF;
"elsif"				return ELSIF;
"else"				return ELSE;
"while"				return WHILE;
"for"				return FOR;
"return"			return RETURN;
"procedure"			return PROC;
"function"			return FUNC;
"endcase"			return ENDCASE;
"endenum"			return ENDENUM;
"endfor"			return ENDFOR;
"endfunction"		return ENDFUNC;
"endif"				return ENDIF;
"endprocedure"		return ENDPROC;
"endstruct"			return ENDSTRUCT;
"endunion"			return ENDUNION;
"endwhile"			return ENDWHILE;
"break"				return BREAK;
"continue"			return CONT;
"do"				return DO;
"case"				return CASE;
"when"				return WHEN;
"const"				return CONST;
"static"			return STATIC;
"sizeof"			return SIZEOF;
"typeof"			return TYPEOF;
"print"				return PRINT;
"println"			return PRINTLN;
"read"				return READ;
"null"				return NNULL;

"true"				return TRUE;
"false"				return FALSE;

"auto"				return AUTO;
"bool"				return BOOL;
"byte"				return BYTE;
"char"				return CHAR;
"double"			return DOUBLE;
"enum"				return ENUM;
"float"				return FLOAT;
"int"				return INT;
"long"				return LONG;
"short"				return SHORT;
"string"			return STRING;
"struct"			return STRUCT;
"union"				return UNION;

"("					return LPAREN;
")"					return RPAREN;
"["					return LSQPAREN;
"]"					return RSQPAREN;
"{"					return LBRACE;
"}"					return RBRACE;

";"					return SEMICOLON;
"."					return DOT;
","					return COMMA;

"="					return ASSIGN;
"<"					return LT;
">"					return GT;
"<="				return LET;
">="				return GET;
"=="				return EQ;
"!="				return DIFF;
"+"					return PLUS;
"-"					return MINUS;
"*"					return ASTERISK;
"/"					return DIV;
"%"					return MOD;
"+="				return PLUSASSIGN;
"-="				return MINUSASSIGN;
"*="				return PRODUCTASSIGN;
"/="				return DIVASSIGN;
"%="				return MODASSIGN;
"!"					return NOT;
"&&"				return AND;
"||"				return OR;
"&&&"				return SCAND;
"|||"				return SCOR;
"~"					return COMPLEMENT;
"&"					return AMPERSAND;
"&="				return BANDASSIGN;
"|"					return BOR;
"|="				return BORASSIGN;
"^"					return BOREXC;
"^="				return BOREXCASSIGN;
"<<"				return LSHIFT;
"<<="				return LSHIFTASSIGN;
">>"				return RSHIFT;
">>="				return RSHIFTASSIGN;
"->"				return PTR_OP;

[_a-zA-Z][_a-zA-Z0-9]* {
	yylval.sValue = yytext;
	return IDENTIFIER;
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
    return REAL;
}

\"(\\.|[^"])*\" {
	/* Uma string começa com '"' seguida de qualquer numero de caracteres que nao sao '"'
		ou sao uma \ seguida de um caractere, e termina com '"' */
	yylval.sValue = yytext;
	return STR;
}

[+-]?[0-9]+[_a-zA-Z0-9]+ {
	fprintf(stderr, "Incorrect integer or identifier '%s' at line %d.\n", yytext, yylineno);
}

\/\/[^\n]*\n { /* do nothing */ }

[ \t]*		{ /* do nothing */ }

[\n]		{ /* do nothing */ }

\/\*([^*]|[\r\n]|(\*+([^*/]|[\r\n])))*\*+\/ { /* do nothing */ }

. {
	fprintf(stderr, "Bad input '%s' at line %d.\n", yytext, yylineno);
}
%%

int yywrap(void){
	return 1;
}

/* Rotinas para conversao de numeros */

int octal(char *str) {
	int num;
	(void) sscanf(str, "%o", &num);
	return num;
}

int hex(char *str) {
	int num;
	(void) sscanf(str+2, "%x", &num);
	return num;
}

/* Rotinas para ignorar comentarios */

void multLineComment() {
	char c;
loop:
	while((c = input()) != '*' && c != 0)
		;
	if((c = input()) != '/' && c != 0) {
		goto loop;
	}
}

void lineComment() {
	char c;
	while((c = input()) != '\n' && c != 0)
		;
}
