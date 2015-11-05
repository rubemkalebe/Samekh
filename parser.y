%{
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>

extern char *yytext;
extern int yylineno;

extern "C" {
  int yyparse(void);

  int yylex(void);

  void yyerror(const char *s);
}
%}

%union{
	int iValue; 	/* integer value */
	char cValue;	/* char value */
	char *sValue;	/* string value */
};

%token ASSIGN               ASSIGN_PLUS         ASSIGN_MINUS            ASSIGN_PRODUCT    ASSIGN_DIV        ASSIGN_MOD
%token ASSIGN_BITWISE_AND   ASSIGN_BITWISE_OR   ASSIGN_BITWISE_OR_EXC   ASSIGN_L_SHIFT    ASSIGN_R_SHIFT
%token AMPERSAND            AUTO
%token BOOL                 BREAK               BYTE
%token BITWISE_COMPLEMENT   BITWISE_OR          BITWISE_OR_EXC
%token CASE                 CHAR                COMMA                   CONTINUE          CONST
%token DECIMAL              DO                  DOT                     DOUBLE
%token ENUM                 ELSE                ELSIF
%token END_CASE             END_ENUM            END_FOR                 END_FUNCTION      END_IF            END_PROCEDURE
%token END_STRUCT           END_UNION           END_WHILE
%token FALSE                FLOAT               FOR                     FUNCTION          FLOATING_POINT
%token HEX
%token IF                   INT
%token L_PAREN              L_SQ_PAREN          L_BRACE                 L_SHIFT
%token LOG_NOT              LOG_AND             LOG_OR                  LOG_SC_AND        LOG_SC_OR
%token LONG
%token NNULL
%token OP_EQ                OP_NE               OP_PTR                  OP_PLUS           OP_MINUS          OP_ASTERISK
%token OP_DIV               OP_MOD              OP_LET                  OP_LT             OP_GET            OP_GT
%token OCTAL
%token PRINT                PRINTLN             PROCEDURE
%token READ                 RETURN
%token R_PAREN              R_SQ_PAREN          R_BRACE                 R_SHIFT
%token SHORT                STRING              STRING_LITERAL          STRUCT            STATIC            SIZEOF
%token SEMICOLON
%token TRUE                 TYPEOF
%token UNION
%token WHEN                 WHILE

%%

  program
    : ASSIGN {std::cout << "Pega, Umberto!\n";}
    ;

%%

void yyerror(const char *s) {
	fprintf(stderr, "Error: %s at '%s' at line %i.\n", s, yytext, yylineno);
}
