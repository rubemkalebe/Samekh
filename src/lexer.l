/*
 * lexer.l
 *	created by Rubem Kalebe (2015).
 *
 * Especificacoes lex da linguagem Samekh.
 */

ES  (\\(['"\?\\abfnrtv]|[0-7]{1,3}|x[a-fA-F0-9]+))

%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "parser.hpp"

%}

%option yylineno

%%

"if"						{ yylval.lexeme = "if"; return IF; }
"elsif"         { yylval.lexeme = "else if"; return ELSIF; }
"else"					{ yylval.lexeme = "else"; return ELSE; }
"while"					{ yylval.lexeme = "while"; return WHILE; }
"for"						{ yylval.lexeme = "for"; return FOR; }
"return"				{ yylval.lexeme = "return"; return RETURN; }
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
"break"					{ yylval.lexeme = "break"; return BREAK; }
"continue"			{ yylval.lexeme = "continue"; return CONTINUE; }
"then"					return THEN;
"case"					return CASE;
"when"					return WHEN;
"const"					{ yylval.lexeme = "const"; return CONST; }
"static"				{ yylval.lexeme = "static"; return STATIC; }
"sizeof"				{ yylval.lexeme = "sizeof"; return SIZEOF; }
"typeof"				return TYPEOF;
"print"					{ yylval.lexeme = "printf"; return PRINT; }
"println"				{ yylval.lexeme = "printf"; return PRINTLN; }
"read"					{ yylval.lexeme = "scanf"; return READ; }

"auto"					{ yylval.lexeme = "auto"; return AUTO; }
"bool"					{ yylval.lexeme = "bool"; return BOOL; }
"enum"					{ yylval.lexeme = "enum"; return ENUM; }
"double"				{ yylval.lexeme = "double"; return DOUBLE; }
"int"						{ yylval.lexeme = "int"; return INT; }
"long"					{ yylval.lexeme = "long"; return LONG; }
"string"				{ yylval.lexeme = "string"; return STRING; }
"struct"				{ yylval.lexeme = "struct"; return STRUCT; }
"union"					{ yylval.lexeme = "union"; return UNION; }

"("							{ yylval.lexeme = "("; return L_PAREN; }
")"							{ yylval.lexeme = ")"; return R_PAREN; }
"["							{ yylval.lexeme = "["; return L_SQ_PAREN; }
"]"							{ yylval.lexeme = "]"; return R_SQ_PAREN; }
"{"							{ yylval.lexeme = "{"; return L_BRACE; }
"}"							{ yylval.lexeme = "}"; return R_BRACE; }

";"							{ yylval.lexeme = ";"; return SEMICOLON; }
"."							{ yylval.lexeme = "."; return DOT; }
","							{ yylval.lexeme = ","; return COMMA; }

"="							{ yylval.lexeme = "="; return ASSIGN; }
"<"							{ yylval.lexeme = "<"; return OP_LT; }
">"							{ yylval.lexeme = ">"; return OP_GT; }
"<="						{ yylval.lexeme = "<="; return OP_LET; }
">="						{ yylval.lexeme = ">="; return OP_GET; }
"=="						{ yylval.lexeme = "=="; return OP_EQ; }
"!="						{ yylval.lexeme = "!="; return OP_NE; }
"+"							{ yylval.lexeme = "+"; return OP_PLUS; }
"-"							{ yylval.lexeme = "-"; return OP_MINUS; }
"*"							{ yylval.lexeme = "*"; return OP_ASTERISK; }
"/"							{ yylval.lexeme = "/"; return OP_DIV; }
"%"							{ yylval.lexeme = "%"; return OP_MOD; }
"+="						{ yylval.lexeme = "+="; return ASSIGN_PLUS; }
"-="						{ yylval.lexeme = "-="; return ASSIGN_MINUS; }
"*="						{ yylval.lexeme = "*="; return ASSIGN_PRODUCT; }
"/="						{ yylval.lexeme = "/="; return ASSIGN_DIV; }
"%="						{ yylval.lexeme = "%="; return ASSIGN_MOD; }
"!"							{ yylval.lexeme = "!"; return LOG_NOT; }
"&&"						return LOG_AND;
"||"						return LOG_OR;
"&&&"						return LOG_SC_AND;
"|||"						return LOG_SC_OR;
"~"							{ yylval.lexeme = "~"; return BITWISE_COMPLEMENT; }
"&"							{ yylval.lexeme = "&"; return AMPERSAND; }
"&="						{ yylval.lexeme = "&="; return ASSIGN_BITWISE_AND; }
"|"							{ yylval.lexeme = "|"; return BITWISE_OR; }
"|="						{ yylval.lexeme = "|="; return ASSIGN_BITWISE_OR; }
"^"							{ yylval.lexeme = "^"; return BITWISE_OR_EXC; }
"^="						{ yylval.lexeme = "^="; return ASSIGN_BITWISE_OR_EXC; }
"<<"						{ yylval.lexeme = "<<"; return L_SHIFT; }
"<<="						{ yylval.lexeme = "<<="; return ASSIGN_L_SHIFT; }
">>"						{ yylval.lexeme = ">>"; return R_SHIFT; }
">>="						{ yylval.lexeme = ">>="; return ASSIGN_R_SHIFT; }
"->"						{ yylval.lexeme = "->"; return OP_PTR; }

"null" {
  yylval.node = (nodeType*) malloc(sizeof(nodeType));
  yylval.node->type = "null";
  yylval.node->lexeme = "NULL";
  return NNULL;
}

"true" {
  yylval.node = (nodeType*) malloc(sizeof(nodeType));
  yylval.node->type = "bool";
  yylval.node->lexeme = "true";
  return BOOL_LITERAL;
 }

"false" {
  yylval.node = (nodeType*) malloc(sizeof(nodeType));
  yylval.node->type = "bool";
  yylval.node->lexeme = "false";
  return BOOL_LITERAL;
}

[_a-zA-Z][_a-zA-Z0-9]* {
  yylval.lexeme = strdup(yytext);
	return IDENTIFIER;
}

0[0-7]+ {
  yylval.node = (nodeType*) malloc(sizeof(nodeType));
	yylval.node->type = "int";
  yylval.node->lexeme = strdup(yytext);
	return OCTAL;
}

[0-9]+	{
  yylval.node = (nodeType*) malloc(sizeof(nodeType));
  yylval.node->type = "int";
  yylval.node->lexeme = strdup(yytext);
	return DECIMAL;
}

0[xX][0-9a-fA-F]+ {
  yylval.node = (nodeType*) malloc(sizeof(nodeType));
  yylval.node->type = "int";
  yylval.node->lexeme = strdup(yytext);
	return HEX;
}

[0-9]+([.][0-9]+)?([eE][+-]?[0-9]+)? {
  yylval.node = (nodeType*) malloc(sizeof(nodeType));
  yylval.node->type = "double";
  yylval.node->lexeme = strdup(yytext);
	return FLOATING_POINT;
}

\"(\\.|[^"])*\" {
	/* Uma string começa com '"' seguida de qualquer numero de caracteres que nao sao '"'
			ou sao uma \ seguida de um caractere, e termina com '"' */

  yylval.node = (nodeType*) malloc(sizeof(nodeType));
  yylval.node->type = "string";
  yylval.node->lexeme = strdup(yytext);
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
  exit(1);
}
%%

int yywrap(void){
	return 1;
}
