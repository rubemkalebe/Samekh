/*
 * parser.y
 *	created by Rubem Kalebe (2015).
 *
 */

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
  char bValue;  /* bool value */
	char *sValue;	/* string value */
};

%token ASSIGN               ASSIGN_PLUS         ASSIGN_MINUS            ASSIGN_PRODUCT    ASSIGN_DIV        ASSIGN_MOD
%token ASSIGN_BITWISE_AND   ASSIGN_BITWISE_OR   ASSIGN_BITWISE_OR_EXC   ASSIGN_L_SHIFT    ASSIGN_R_SHIFT
%token AMPERSAND            AUTO
%token BOOL                 BOOL_LITERAL        BREAK               BYTE
%token BITWISE_COMPLEMENT   BITWISE_OR          BITWISE_OR_EXC
%token CASE                 CHAR                COMMA                   CONTINUE          CONST
%token DECIMAL              DO                  DOT                     DOUBLE
%token ENUM                 ELSE                ELSIF
%token END_CASE             END_ENUM            END_FOR                 END_FUNCTION      END_IF            END_PROCEDURE
%token END_STRUCT           END_UNION           END_WHILE
%token FLOAT                FOR                 FUNCTION                FLOATING_POINT
%token HEX
%token IDENTIFIER           IF                   INT
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
%token TYPEOF
%token UNION
%token WHEN                 WHILE

%%

translation_unit
  : program_file
  ;

program_file
  : declarations
  ;

declarations
  : declaration
  | declarations declaration
  ;

declaration
  : function_declaration
  | procedure_declaration
  | field_declaration
  ;

type_declaration
  : STRUCT IDENTIFIER field_declarations END_STRUCT
  | UNION IDENTIFIER discriminant union_body END_UNION
  | ENUM IDENTIFIER enumerator_list END_ENUM
  ;

field_declarations
  : field_declaration
  | field_declarations field_declaration
  ;

field_declaration
  : field_variable_declaration SEMICOLON
  | type_declaration
  ;

field_variable_declaration
  : modifiers type_specifier variable_declarators
  |           type_specifier variable_declarators
  ;

modifiers
  : modifier
  | modifiers modifier
  ;

modifier
  : CONST
  | STATIC
  ;

type_specifier
  : type_name
  ;

type_name
  : primitive_type
  | qualified_name
  ;

dims
  : L_SQ_PAREN expression_or_empty R_SQ_PAREN
  | dims L_SQ_PAREN expression_or_empty R_SQ_PAREN
  ;

expression_or_empty
  : expression
  |
  ;

primitive_type
  : AUTO
  | BOOL
  | CHAR
  | DOUBLE
  | FLOAT
  | INT
  | LONG
  | SHORT
  | STRING
  ;

/*qualified_name
  : IDENTIFIER
  | qualified_name DOT IDENTIFIER
  ;*/

qualified_name
  : IDENTIFIER qualified_name2
  ;

qualified_name2
  :
  | DOT IDENTIFIER qualified_name2
  ;

variable_declarators
  : variable_declarator
  | variable_declarators COMMA variable_declarator
  ;

variable_declarator
  : declarator_name
  | declarator_name ASSIGN variable_initializer
  ;

declarator_name
  : IDENTIFIER
  | declarator_name L_SQ_PAREN R_SQ_PAREN
  ;

variable_initializer
  : expression
  | L_BRACE R_BRACE
  | L_BRACE array_initializers R_BRACE
  ;

array_initializers
  : variable_initializer
  | array_initializers COMMA variable_initializer
  | array_initializers COMMA
  ;

discriminant
  :
  ;

union_body
  :
  ;

enumerator_list
  : enumerator
  | enumerator_list COMMA enumerator
  ;

enumerator
  : IDENTIFIER ASSIGN expression
  | IDENTIFIER
  ;

function_declaration
  : ASSIGN
  ;

procedure_declaration
  : COMMA
  ;

expression
  : assignment_expression
  ;

assignment_expression
  : conditional_or_expression
  | unary_expression assignment_operator assignment_expression
  ;

unary_expression
  : arithmetic_unary_operator cast_expression
	| logical_unary_expression
  ;

logical_unary_expression
  : postfix_expression
	| logical_unary_operator unary_expression
  ;

postfix_expression
  : primary_expression
  ;

primary_expression
  : qualified_name
  | not_just_name
  ;

arithmetic_unary_operator
  : OP_PLUS
  | OP_MINUS
  ;

logical_unary_operator
  : BITWISE_COMPLEMENT
  | LOG_NOT
  ;

conditional_or_expression
  : conditional_and_expression
  | conditional_or_expression LOG_OR conditional_and_expression
  | conditional_or_expression LOG_SC_OR conditional_and_expression
  ;

conditional_and_expression
  : inclusive_or_expression
  | conditional_and_expression LOG_AND inclusive_or_expression
  | conditional_and_expression LOG_SC_AND inclusive_or_expression
  ;

inclusive_or_expression
  : exclusive_or_expression
  | inclusive_or_expression BITWISE_OR exclusive_or_expression
  ;

exclusive_or_expression
  : and_expression
  | exclusive_or_expression BITWISE_OR_EXC and_expression
  ;

and_expression
  : equality_expression
  | and_expression AMPERSAND equality_expression
  ;

equality_expression
  : relational_expression
  | equality_expression OP_EQ relational_expression
  | equality_expression OP_NE relational_expression
  ;

relational_expression
	: shift_expression
  | relational_expression OP_LT shift_expression
	| relational_expression OP_GT shift_expression
	| relational_expression OP_LET shift_expression
	| relational_expression OP_GET shift_expression
	| relational_expression TYPEOF type_specifier
	;

shift_expression
  : additive_expression
  | shift_expression L_SHIFT additive_expression
  | shift_expression R_SHIFT additive_expression
  ;

additive_expression
  : multiplicative_expression
  | additive_expression OP_PLUS multiplicative_expression
	| additive_expression OP_MINUS multiplicative_expression
  ;

multiplicative_expression
  : cast_expression
	| multiplicative_expression OP_ASTERISK cast_expression
	| multiplicative_expression OP_DIV cast_expression
	| multiplicative_expression OP_MOD cast_expression
  ;

cast_expression
  : unary_expression
  | L_PAREN primitive_type_expression R_PAREN cast_expression
	| L_PAREN user_type_expression R_PAREN cast_expression
	| L_PAREN expression R_PAREN logical_unary_expression
  ;

primitive_type_expression
  : primitive_type
  | primitive_type dims
  ;

user_type_expression
  : qualified_name dims
  ;

assignment_operator
  : ASSIGN
  | ASSIGN_PLUS
  | ASSIGN_MINUS
  | ASSIGN_PRODUCT
  | ASSIGN_DIV
  | ASSIGN_MOD
  | ASSIGN_BITWISE_AND
  | ASSIGN_BITWISE_OR
  | ASSIGN_BITWISE_OR_EXC
  | ASSIGN_L_SHIFT
  | ASSIGN_R_SHIFT
  ;

not_just_name
  : complex_primary
  ;

complex_primary
  : L_PAREN expression R_PAREN
  | complex_primary_no_parenthesis
  ;

complex_primary_no_parenthesis
  : BOOL_LITERAL
  | OCTAL
  | DECIMAL
  | HEX
  | FLOATING_POINT
  | STRING_LITERAL
  | array_access
  | field_access
  | subprogram_call
  ;

array_access
  : qualified_name L_SQ_PAREN expression R_SQ_PAREN
  | complex_primary L_SQ_PAREN expression R_SQ_PAREN
  ;

field_access
  : not_just_name DOT IDENTIFIER
  | postfix_expression DOT IDENTIFIER
  ;

subprogram_call
  : subprogram_access L_PAREN argument_list R_PAREN
  | subprogram_access L_PAREN R_PAREN
  ;

subprogram_access
  : complex_primary_no_parenthesis
  | qualified_name
  ;

argument_list
  : expression
  | argument_list COMMA expression
  ;

%%

void yyerror(const char *s) {
	fprintf(stderr, "Error: %s at '%s' at line %i.\n", s, yytext, yylineno);
}
