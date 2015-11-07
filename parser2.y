%{
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int yylex(void);
void yyerror(char *);

extern char *yytext;
extern int yylineno;
%}

%union{
	int iValue; 	/* integer value */
	char cValue;	/* char value */
	char *sValue;	/* string value */
};

%token <sValue> IDENTIFIER STR
%token <iValue> DECIMAL REAL HEX OCTAL
%token TRUE FALSE
%token BYTE BOOL SHORT INT LONG FLOAT DOUBLE CHAR STRING STRUCT UNION ENUM AUTO
%token IF ELSIF ELSE WHILE FOR RETURN PROC FUNC
%token ENDBLOCK ENDCASE ENDENUM ENDFOR ENDFUNC ENDIF ENDPROC ENDSTRUCT ENDUNION ENDWHILE
%token BREAK CONT DO CASE WHEN CONST STATIC SIZEOF TYPEOF PRINT PRINTLN READ NNULL
%token LT GT LET GET EQ DIFF PLUS MINUS ASTERISK DIV MOD
%token ASSIGN PLUSASSIGN MINUSASSIGN PRODUCTASSIGN DIVASSIGN MODASSIGN BANDASSIGN BORASSIGN BOREXCASSIGN LSHIFTASSIGN RSHIFTASSIGN
%token NOT AND OR SCAND SCOR COMPLEMENT AMPERSAND BOR BOREXC LSHIFT RSHIFT
%token SEMICOLON DOT COMMA
%token LPAREN RPAREN LSQPAREN RSQPAREN LBRACE RBRACE PTR_OP

/* %type <iValue> expr expr2 primary
%type <sValue> comparation */

%start program

%%

program: external_declaration
	| program external_declaration
	;

external_declaration: procedure_definition
	| function_definition
	| declaration
	;

declaration: declaration_specifiers SEMICOLON
	| declaration_specifiers init_declarator_list SEMICOLON
	;

declaration_specifiers: storage_specifier
	| storage_specifier declaration_specifiers
	| type_specifier
	| type_specifier declaration_specifiers
	| type_qualifier
	| type_qualifier declaration_specifiers
	;

storage_specifier: STATIC

type_specifier: CHAR
	| SHORT
	| INT
	| LONG
	| FLOAT
	| DOUBLE
	| STRING
	| BOOL
	| AUTO
	| struct_specifier
	| union_specifier
	| enum_specifier
	;

type_qualifier: CONST
	;

init_declarator_list: init_declarator
	| init_declarator_list COMMA init_declarator
	;

init_declarator: declarator ASSIGN initializer
	| declarator
	;

declarator: pointer direct_declarator
	| reference direct_declarator
	| direct_declarator
	;

pointer: ASTERISK type_qualifier_list pointer
	| ASTERISK type_qualifier_list
	| ASTERISK pointer
	| ASTERISK
	;

reference: AMPERSAND type_qualifier_list reference
	| AMPERSAND type_qualifier_list
	| ASTERISK reference
	| AMPERSAND
	;

type_qualifier_list: type_qualifier
	| type_qualifier_list type_qualifier
	;

direct_declarator: IDENTIFIER
	| LPAREN declarator RPAREN
	| direct_declarator LSQPAREN constant_expression RSQPAREN
	| direct_declarator LSQPAREN RSQPAREN
	| direct_declarator LSQPAREN assignment_expression RSQPAREN
	| direct_declarator LPAREN parameter_type_list RPAREN
	| direct_declarator LPAREN identifier_list RPAREN
	| direct_declarator LPAREN RPAREN
	;

identifier_list: IDENTIFIER
	| identifier_list COMMA IDENTIFIER
	;

constant_expression: conditional_expression
	;

conditional_expression: logical_or_expression
	| logical_short_circuit_or_expression
	;

logical_or_expression: logical_and_expression
	| logical_short_circuit_and_expression
	| logical_or_expression OR logical_and_expression
	| logical_or_expression OR logical_short_circuit_and_expression
	| logical_short_circuit_or_expression OR logical_and_expression
	| logical_short_circuit_or_expression OR logical_short_circuit_and_expression
	;

logical_short_circuit_or_expression: logical_and_expression
	| logical_short_circuit_and_expression
	| logical_or_expression SCOR logical_and_expression
	| logical_or_expression SCOR logical_short_circuit_and_expression
	| logical_short_circuit_or_expression SCOR logical_and_expression
	| logical_short_circuit_or_expression SCOR logical_short_circuit_and_expression
	;

logical_and_expression: inclusive_or_expression
	| logical_and_expression AND inclusive_or_expression
	;

logical_short_circuit_and_expression: inclusive_or_expression
	| logical_and_expression SCAND inclusive_or_expression
	| logical_short_circuit_and_expression SCAND inclusive_or_expression
	;

inclusive_or_expression: exclusive_or_expression
	| inclusive_or_expression BOR exclusive_or_expression
	;

exclusive_or_expression: and_expression
	| exclusive_or_expression BOREXC and_expression
	;

and_expression: equality_expression
	| and_expression AMPERSAND equality_expression
	;

equality_expression: relational_expression
	| equality_expression EQ relational_expression
	| equality_expression DIFF relational_expression
	;

relational_expression: shift_expression
	| relational_expression LT shift_expression
	| relational_expression GT shift_expression
	| relational_expression LET shift_expression
	| relational_expression GET shift_expression
	;

shift_expression: additive_expression
	| shift_expression LSHIFT additive_expression
	| shift_expression RSHIFT additive_expression
	;

additive_expression: multiplicative_expression
	| additive_expression PLUS multiplicative_expression
	| additive_expression MINUS multiplicative_expression
	;

multiplicative_expression: cast_expression
	| multiplicative_expression ASTERISK cast_expression
	| multiplicative_expression DIV cast_expression
	| multiplicative_expression MOD cast_expression
	;

cast_expression: unary_expression
	| LPAREN type_name RPAREN cast_expression
	;

unary_expression: postfix_expression
	| unary_operator cast_expression
	| SIZEOF unary_expression
	| SIZEOF LPAREN type_name RPAREN
	| TYPEOF LPAREN IDENTIFIER RPAREN
	;

postfix_expression: primary_expression
	| postfix_expression LSQPAREN expression RSQPAREN
	| postfix_expression LPAREN RPAREN
	| postfix_expression LPAREN argument_expression_list RPAREN
	| postfix_expression DOT IDENTIFIER
	| postfix_expression PTR_OP IDENTIFIER
	| postfix_expression LPAREN type_name RPAREN LBRACE initializer_list RBRACE
	| postfix_expression LPAREN type_name RPAREN LBRACE initializer_list COMMA RBRACE
	;

primary_expression: IDENTIFIER
	| STR
	| LPAREN expression RPAREN
	;

argument_expression_list: assignment_expression
	| argument_expression_list COMMA assignment_expression
	;

initializer_list: designation initializer
	| initializer
	| initializer_list COMMA designation initializer
	| initializer_list COMMA initializer
	;

designation: designator_list ASSIGN
	;

initializer: LBRACE initializer_list RBRACE
	| LBRACE initializer_list COMMA RBRACE
	| assignment_expression
	;

initializer_list: designation initializer
	| initializer
	| initializer_list COMMA designation initializer
	| initializer_list COMMA initializer
	;

designator_list: designator
	| designator_list designator
	;

designator: LSQPAREN constant_expression RSQPAREN
	| DOT IDENTIFIER
	;

unary_operator: AMPERSAND
	| ASTERISK
	| PLUS
	| MINUS
	| COMPLEMENT
	| NOT
	;

type_name: specifier_qualifier_list
	| specifier_qualifier_list abstract_declarator
	;

specifier_qualifier_list: type_specifier specifier_qualifier_list
	| type_specifier
	| type_qualifier specifier_qualifier_list
	| type_qualifier
	;

abstract_declarator: pointer
	| reference
	| direct_abstract_declarator
	| pointer direct_abstract_declarator
	| reference direct_abstract_declarator
	;

direct_abstract_declarator: LPAREN abstract_declarator RPAREN
	| LSQPAREN RSQPAREN
	| LSQPAREN constant_expression RSQPAREN
	| direct_abstract_declarator LSQPAREN RSQPAREN
	| direct_abstract_declarator LSQPAREN constant_expression RSQPAREN
	| LPAREN RPAREN
	| LPAREN parameter_type_list RPAREN
	| direct_abstract_declarator LPAREN RPAREN
	| direct_abstract_declarator LPAREN parameter_type_list RPAREN
	;

parameter_type_list: parameter_list
	;

parameter_list: parameter_declaration
	| parameter_list COMMA parameter_declaration
	;

parameter_declaration: declaration_specifiers declarator
	| declaration_specifiers abstract_declarator
	| declaration_specifiers
	;

procedure_definition:
	PROC IDENTIFIER LPAREN parameter_type_list RPAREN compound_statement ENDPROC
	;

function_definition:
	FUNC declaration_specifiers direct_declarator compound_statement ENDFUNC
	;

compound_statement: block_item_list
	;

block_item_list: block_item
	| block_item_list block_item
	;

block_item: declaration
	| statement
	;

statement: compound_statement
	| expression_statement
	| selection_statement
	| iteration_statement
	| jump_statement
	;

expression_statement: SEMICOLON
	| expression SEMICOLON
	;

selection_statement: if_statement elsif_statement else_statement ENDIF
	| if_statement elsif_statement ENDIF
	| if_statement else_statement ENDIF
	| if_statement ENDIF
	;

if_statement: IF LPAREN expression RPAREN statement
	;

elsif_statement: ELSIF LPAREN expression RPAREN
	| elsif_statement ELSIF LPAREN expression RPAREN
	;

else_statement: ELSE statement
	;

iteration_statement: while_statement
	| for_statement
	;

while_statement: WHILE LPAREN expression RPAREN statement ENDWHILE
	;

for_statement: FOR LPAREN expression_statement expression_statement RPAREN statement ENDFOR
	| FOR LPAREN expression_statement expression_statement expression RPAREN statement ENDFOR
	| FOR LPAREN declaration expression_statement RPAREN statement ENDFOR
	| FOR LPAREN declaration expression_statement expression RPAREN statement ENDFOR
	;

jump_statement: CONT SEMICOLON
	| BREAK SEMICOLON
	| RETURN SEMICOLON
	| RETURN expression SEMICOLON
	;

expression: assignment_expression
 	| expression COMMA assignment_expression
	;

assignment_expression: conditional_expression
	| unary_expression assignment_operator assignment_expression
	;

assignment_operator: ASSIGN
	| PLUSASSIGN
	| MINUSASSIGN
	| PRODUCTASSIGN
	| DIVASSIGN
	| MODASSIGN
	| BANDASSIGN
	| BORASSIGN
	| BOREXCASSIGN
	| LSHIFTASSIGN
	| RSHIFTASSIGN
	;

struct_specifier: STRUCT IDENTIFIER struct_declaration_list ENDSTRUCT
	;

union_specifier: UNION IDENTIFIER LPAREN parameter_declaration RPAREN union_body ENDSTRUCT
	;

enum_specifier: ENUM IDENTIFIER enumerator_list ENDENUM
	;

struct_declaration_list: struct_declaration
	| struct_declaration_list struct_declaration
	;

struct_declaration: declaration
	| struct_declaration declaration
	;

union_body: struct_declaration short_case_statement
	| struct_declaration
	;

short_case_statement: CASE expression case_body ENDCASE
	;

case_body: case_label
	| case_body case_label
	;

case_label: WHEN expression DO declaration
	;

enumerator_list: enumerator
	| enumerator_list COMMA enumerator
	;

enumerator: IDENTIFIER ASSIGN constant_expression
	| IDENTIFIER
	;

%%

void yyerror(char *s) {
	fprintf(stderr, "!!! O símbolo --> '%s' <-- não é reconhecido pela linguagem C+-: %s na linha %i\n",yytext, s, yylineno);
//	exit(4);
}
