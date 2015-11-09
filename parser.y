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

using namespace std;

extern char *yytext;
extern int yylineno;

extern "C" {
  int yyparse(void);

  int yylex(void);

  void yyerror(const char *s);
}
%}

%union{
	int iValue; 	  /* integer value */
	char cValue;	  /* char value */
  char bValue;    /* bool value */
	char *sValue;	  /* string value */
  double fValue;  /* floating point value */
};


%token <sValue> IDENTIFIER    STRING_LITERAL
%token <iValue> DECIMAL       HEX               OCTAL
%token <fValue> FLOATING_POINT
%token <bValue> BOOL_LITERAL
%token <cValue> CHAR_LITERAL

%token ASSIGN               ASSIGN_PLUS         ASSIGN_MINUS            ASSIGN_PRODUCT    ASSIGN_DIV        ASSIGN_MOD
%token ASSIGN_BITWISE_AND   ASSIGN_BITWISE_OR   ASSIGN_BITWISE_OR_EXC   ASSIGN_L_SHIFT    ASSIGN_R_SHIFT
%token AMPERSAND            AUTO
%token BOOL                 BREAK               BYTE
%token BITWISE_COMPLEMENT   BITWISE_OR          BITWISE_OR_EXC
%token CASE                 CHAR                COMMA                   CONTINUE          CONST
%token DOT                  DOUBLE
%token ENUM                 ELSE                ELSIF
%token END_CASE             END_ENUM            END_FOR                 END_FUNCTION      END_IF            END_PROCEDURE
%token END_STRUCT           END_UNION           END_WHILE
%token FLOAT                FOR                 FUNCTION
%token IF                   INT
%token L_PAREN              L_SQ_PAREN          L_BRACE                 L_SHIFT
%token LOG_NOT              LOG_AND             LOG_OR                  LOG_SC_AND        LOG_SC_OR
%token LONG
%token NNULL
%token OP_EQ                OP_NE               OP_PTR                  OP_PLUS           OP_MINUS          OP_ASTERISK
%token OP_DIV               OP_MOD              OP_LET                  OP_LT             OP_GET            OP_GT
%token PRINT                PRINTLN             PROCEDURE
%token READ                 RETURN
%token R_PAREN              R_SQ_PAREN          R_BRACE                 R_SHIFT
%token SHORT                STRING              STRUCT                  STATIC            SIZEOF
%token SEMICOLON
%token THEN                 TYPEOF
%token UNION
%token WHEN                 WHILE

%start translation_unit

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
  | type_declaration
  | variable_declaration
  ;

function_declaration
  : FUNCTION type_specifier subprogram_declarator subprogram_body END_FUNCTION
  ;

procedure_declaration
  : PROCEDURE subprogram_declarator subprogram_body END_PROCEDURE
  ;

subprogram_declarator
  : IDENTIFIER L_PAREN parameter_list R_PAREN
  | IDENTIFIER L_PAREN R_PAREN
  ;

parameter_list
  : parameter
  | parameter_list COMMA parameter
  ;

parameter
  : type_specifier declarator_name
  | CONST type_specifier declarator_name
  ;

subprogram_body
  : block
  | SEMICOLON
  ;

block
  : local_variable_declarations_and_statements
  ;

local_variable_declarations_and_statements
  : local_variable_declarations_or_statements
  | local_variable_declarations_and_statements local_variable_declarations_or_statements
  ;

local_variable_declarations_or_statements
  : local_variable_declaration_statement
  | statement
  ;

local_variable_declaration_statement
  : type_specifier variable_declarators SEMICOLON
  | STATIC type_specifier variable_declarators SEMICOLON
  ;

statement
  : assignment_expression SEMICOLON
  | selection_statement
  | iteration_statement
	| jump_statement
  ;

selection_statement
  : IF L_PAREN expression R_PAREN block ELSIF elsif_staments END_IF
  | IF L_PAREN expression R_PAREN block ELSE block END_IF
  | IF L_PAREN expression R_PAREN block END_IF
  ;

elsif_staments
  : elsif_stament
  | elsif_staments ELSIF elsif_stament
  | ELSE block
  ;

elsif_stament
  : L_PAREN expression R_PAREN block
  ;

iteration_statement
  : WHILE L_PAREN expression R_PAREN block END_WHILE
  | FOR L_PAREN for_init for_expr for_incr R_PAREN block END_FOR
  | FOR L_PAREN for_init for_expr R_PAREN block END_FOR
  ;

for_init
  : expression_statements SEMICOLON
  | local_variable_declaration_statement
  | SEMICOLON
  ;

for_expr
  : expression SEMICOLON
  | SEMICOLON
  ;

for_incr
  : expression_statements
  ;

expression_statements
  : expression_statement
  | expression_statements COMMA expression_statement
  ;

expression_statement
  : expression
  ;

jump_statement
	: BREAK    IDENTIFIER  SEMICOLON
	| BREAK                SEMICOLON
  | CONTINUE IDENTIFIER  SEMICOLON
	| CONTINUE             SEMICOLON
	| RETURN   expression  SEMICOLON
	| RETURN               SEMICOLON
	;

type_declaration
  : STRUCT IDENTIFIER variable_declarations END_STRUCT
  | UNION IDENTIFIER discriminant union_body END_UNION
  | ENUM IDENTIFIER enumerator_list END_ENUM
  ;

variable_declarations
  : variable_declaration
  | variable_declarations variable_declaration
  ;

variable_declaration
  : modifiers type_specifier variable_declarators SEMICOLON
  |           type_specifier variable_declarators SEMICOLON
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

discriminant
  : L_PAREN type_specifier declarator_name R_PAREN
  | /* epsilon */
  ;

enumerator_list
  : enumerator
  | enumerator_list COMMA enumerator
  ;

enumerator
  : IDENTIFIER ASSIGN expression
  | IDENTIFIER
  ;

qualified_name
  : IDENTIFIER
  //| qualified_name DOT IDENTIFIER // causando s/r
  ;

/*qualified_name
  : IDENTIFIER qualified_name2
  ;

qualified_name2
  :
  | DOT IDENTIFIER qualified_name2
  ;*/

union_body
  : variable_declarations short_case_statement
  | variable_declarations
  ;

short_case_statement
  : CASE IDENTIFIER choices END_CASE
  ;

choices
  : choice
  | choices choice
  ;

choice
  : WHEN IDENTIFIER THEN variable_declarations
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
  | declarator_name L_SQ_PAREN expression R_SQ_PAREN
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
  | NNULL
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

dims
  : L_SQ_PAREN R_SQ_PAREN
  | dims L_SQ_PAREN R_SQ_PAREN
  ;

%%

void yyerror(const char *s) {
	fprintf(stderr, "Error: %s at '%s' at line %i.\n", s, yytext, yylineno);
}
