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
#include <fstream>
#include <cstring>
#include "TypesTable.hpp"
#include "SymbolTable.hpp"
#include "PrimitiveTypeEntry.hpp"

using namespace std;

const string fileOutputName = ".output.cpp";

extern char *yytext;
extern int yylineno;

extern "C" {
  int yyparse(void);

  int yylex(void);

  void yyerror(const char *s);
}

char* getType(string type1, string type2);

bool isCompatible(string type1, string target);

bool isPointer(string id);

string pointersOfAType(string decl);

string filterIDofArray(string decl);

string ignorePointers(string decl);

SymbolTable *env = new SymbolTable(NULL);

TypesTable typesTable;

ofstream out(fileOutputName.c_str());

string typeToStore = "";

%}

%code requires {
  typedef struct {
    char* type;     /* type associated */
    char* lexeme;   /* lexeme -- string */
  } nodeType;

  nodeType* copyNode(nodeType* orig);
}

%union{
	char* lexeme;
  nodeType* node;
};

%token <lexeme> IDENTIFIER
%token <lexeme> ASSIGN               ASSIGN_PLUS         ASSIGN_MINUS            ASSIGN_PRODUCT    ASSIGN_DIV        ASSIGN_MOD
%token <lexeme> ASSIGN_BITWISE_AND   ASSIGN_BITWISE_OR   ASSIGN_BITWISE_OR_EXC   ASSIGN_L_SHIFT    ASSIGN_R_SHIFT
%token <lexeme> AMPERSAND            AUTO
%token <lexeme> BOOL                 BREAK
%token <lexeme> BITWISE_COMPLEMENT   BITWISE_OR          BITWISE_OR_EXC
%token <lexeme> DOT
%token <lexeme> CHAR                 COMMA               CONTINUE                CONST
%token <lexeme> ENUM                 ELSE                ELSIF
%token <lexeme> DOUBLE                FOR
%token <lexeme> IF                   INT
%token <lexeme> L_PAREN              L_SQ_PAREN          L_BRACE                 L_SHIFT
%token <lexeme> LOG_NOT              LOG_AND             LOG_OR                  LOG_SC_AND        LOG_SC_OR
%token <lexeme> LONG
%token <lexeme> OP_EQ                OP_NE               OP_PTR                  OP_PLUS           OP_MINUS          OP_ASTERISK
%token <lexeme> OP_DIV               OP_MOD              OP_LET                  OP_LT             OP_GET            OP_GT
%token <lexeme> PRINT                PRINTLN
%token <lexeme> R_PAREN              R_SQ_PAREN          R_BRACE                 R_SHIFT
%token <lexeme> STRING              STRUCT                  STATIC            SIZEOF
%token <lexeme> READ                 RETURN
%token <lexeme> SEMICOLON
%token <lexeme> UNION
%token <lexeme> WHILE

%token CASE
%token END_CASE             END_ENUM            END_FOR                 END_FUNCTION      END_IF            END_PROCEDURE
%token END_STRUCT           END_UNION           END_WHILE
%token FUNCTION
%token PROCEDURE
%token THEN                 TYPEOF
%token WHEN

%token <node> STRING_LITERAL DECIMAL  HEX  OCTAL  FLOATING_POINT  BOOL_LITERAL  NNULL

%type <node> complex_primary_no_parenthesis complex_primary not_just_name qualified_name postfix_expression primary_expression
%type <node> expression assignment_expression conditional_or_expression unary_expression
%type <node> cast_expression logical_unary_expression
%type <node> multiplicative_expression additive_expression shift_expression relational_expression equality_expression
%type <node> and_expression exclusive_or_expression inclusive_or_expression conditional_and_expression
%type <node> variable_initializer array_initializers

%type <lexeme> arithmetic_unary_operator logical_unary_operator assignment_operator dim_expr dim_exprs
%type <lexeme> type_specifier type_name primitive_type declarator_name primitive_type_expression user_type_expression
%type <lexeme> variable_declarator variable_declarators variable_declaration variable_declarations
%type <lexeme> modifier modifiers

%start translation_unit

%%

translation_unit
  : program_file {
      out << "int main() { return 0; }\n";
      out.close();
    }
  ;

program_file
  : declarations
  ;

declarations
  : declaration {
      PrimitiveTypeEntry pt("char");
      /*if(env->get("a") == NULL) {
        env->put("a", pt);
        env->print();
        out << "int main() { return 0;}";
      } else {
        yyerror("Identifier previously declared");
        YYERROR;
      }*/
    }
  | declarations declaration //{out << "declarations done!\n";}
  ;

declaration
  : function_declaration
  | procedure_declaration
  | type_declaration
  | variable_declaration { out << $1 << endl; }
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
  | read_statement
  | print_statement
  | println_statement
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

read_statement
  : READ L_PAREN STRING_LITERAL COMMA argument_list R_PAREN SEMICOLON
  | READ L_PAREN STRING_LITERAL R_PAREN SEMICOLON
  ;

print_statement
  : PRINT L_PAREN expression R_PAREN SEMICOLON
  ;

println_statement
  : PRINTLN L_PAREN expression R_PAREN SEMICOLON
  ;

type_declaration
  : STRUCT IDENTIFIER variable_declarations END_STRUCT
  | UNION IDENTIFIER discriminant union_body END_UNION
  | ENUM IDENTIFIER enumerator_list END_ENUM
  ;

variable_declarations
  : variable_declaration { $$ = strdup($1); }
  | variable_declarations variable_declaration {
      string s = string($1) + string($2);
      $$ = strdup((char*) s.c_str());
    }
  ;

variable_declaration
  : modifiers type_specifier variable_declarators SEMICOLON {
      string s = string($1) + " " + string($2) + " " + string($3) + string($4);
      $$ = strdup((char*) s.c_str());
    }
  | type_specifier variable_declarators SEMICOLON {
      string s = string($1) + " " + string($2) + string($3);
      $$ = strdup((char*) s.c_str());
    }
  ;

modifiers
  : modifier { $$ = strdup($1); }
  | modifiers modifier {
      string s = string($1) + string($2);
      $$ = strdup((char*) s.c_str());
    }
  ;

modifier
  : CONST { $$ = strdup($1); }
  | STATIC { $$ = strdup($1); }
  ;

type_specifier
  : type_name {
      typeToStore = $1;
      $$ = $1;
    }
  ;

type_name
  : primitive_type { $$ = strdup($1); }
  | qualified_name {$$ = (char *) "qualified_name";}
  ;

primitive_type
  : AUTO { $$ = strdup($1); }
  | BOOL { $$ = strdup($1); }
  | INT { $$ = strdup($1); }
  | LONG { $$ = strdup($1); }
  | DOUBLE { $$ = strdup($1); }
  | STRING { $$ = strdup($1); }
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
  : IDENTIFIER {
      if(typesTable.contains($1)) {
        nodeType no;
        no.type = $1;
        no.lexeme = $1;
        $$ = copyNode(&no);
      } else {
        yyerror("Type undeclared");
        YYERROR;
      }
    }
  ;

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
  : variable_declarator { $$ = strdup($1); }
  | variable_declarators COMMA variable_declarator {
      string s = string($1) + string($2) + string($3);
      $$ = strdup((char*) s.c_str());
    }
  ;

variable_declarator
  : declarator_name {
      if(env->get(filterIDofArray($1)) == NULL) {
        PrimitiveTypeEntry pt(typeToStore);
        env->put(filterIDofArray($1), pt);
      } else {
        yyerror("Identifier previously declared");
        YYERROR;
      }
      $$ = strdup($1);
    }
  | declarator_name ASSIGN variable_initializer {
      if(env->get(filterIDofArray($1)) == NULL && isCompatible(ignorePointers(typeToStore), string($3->type))) {
        PrimitiveTypeEntry pt(typeToStore);
        env->put(filterIDofArray($1), pt);
      } else {
        yyerror("Identifier previously declared or invalid assignment");
        YYERROR;
      }
      string s = string($1) + " " + string($2) + " " + string($3->lexeme);
      $$ = strdup((char*) s.c_str());
    }
  ;

declarator_name
  : IDENTIFIER { $$ = strdup($1); }
  | declarator_name dim_exprs {
      string s = string($1) + string($2);
      typeToStore += pointersOfAType($2);
      $$ = strdup((char*) s.c_str());
    }
  ;

variable_initializer
  : expression  { $$ = copyNode($1); }
  | L_BRACE R_BRACE {
      if(!isPointer(typeToStore)) {
        yyerror("Invalid initialization");
        YYERROR;
      }
      string s = string($1) + string($2);
      nodeType no;
      no.type = (char*) "empty";
      no.lexeme = (char*) s.c_str();
      $$ = copyNode(&no);
    }
  | L_BRACE array_initializers R_BRACE {
      if(!isPointer(typeToStore)) {
        yyerror("Invalid initialization");
        YYERROR;
      }
      string s = string($1) + string($2->lexeme) + string($3);
      nodeType no;
      no.type = (char*) string($2->type).c_str();
      no.lexeme = (char*) s.c_str();
      $$ = copyNode(&no);
    }
  ;

array_initializers
  : variable_initializer { $$ = copyNode($1); }
  | array_initializers COMMA variable_initializer {
      string s = string($1->lexeme) + string($2) + string($3->lexeme);
      nodeType no;
      no.type = getType(string($1->type), string($3->type));
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string($1->type) + "\' to \'" + string($3->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      }
      no.lexeme = (char*) s.c_str();
      $$ = copyNode(&no);
    }
  ;

expression
  : assignment_expression { $$ = copyNode($1); }
  ;

assignment_expression
  : conditional_or_expression { $$ = copyNode($1); }
  | unary_expression assignment_operator assignment_expression {
      string s = string($1->lexeme) + string($2) + string($3->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType($1->type, $3->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string($1->type) + "\' to \'" + string($3->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        $$ = copyNode(&no);
      }
    }
  ;

unary_expression
  : arithmetic_unary_operator cast_expression {
      string s = string($1) + string($2->lexeme);
      nodeType no;
      no.type = $2->type;
      no.lexeme = (char*) s.c_str();
      $$ = copyNode(&no);
    }
	| logical_unary_expression { $$ = copyNode($1); }
  ;

logical_unary_expression
  : postfix_expression { $$ = copyNode($1); }
	| logical_unary_operator unary_expression {
      string s = string($1) + string($2->lexeme);
      nodeType no;
      no.type = $2->type;
      no.lexeme = (char*) s.c_str();
      $$ = copyNode(&no);
    }
  ;

postfix_expression
  : primary_expression { $$ = copyNode($1); }
  ;

primary_expression
  : qualified_name { $$ = copyNode($1); }
  | not_just_name { $$ = copyNode($1); }
  ;

arithmetic_unary_operator
  : OP_PLUS { $$ = strdup($1); }
  | OP_MINUS { $$ = strdup($1); }
  ;

logical_unary_operator
  : BITWISE_COMPLEMENT { $$ = strdup($1); }
  | LOG_NOT { $$ = strdup($1); }
  ;

conditional_or_expression
  : conditional_and_expression { $$ = copyNode($1); }
  | conditional_or_expression LOG_OR conditional_and_expression
  | conditional_or_expression LOG_SC_OR conditional_and_expression {
      string s = string($1->lexeme) + "||" + string($3->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType($1->type, $3->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string($1->type) + "\' to \'" + string($3->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        $$ = copyNode(&no);
      }
    }
  ;

conditional_and_expression
  : inclusive_or_expression { $$ = copyNode($1); }
  | conditional_and_expression LOG_AND inclusive_or_expression
  | conditional_and_expression LOG_SC_AND inclusive_or_expression {
      string s = string($1->lexeme) + "&&" + string($3->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType($1->type, $3->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string($1->type) + "\' to \'" + string($3->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        $$ = copyNode(&no);
      }
    }
  ;

inclusive_or_expression
  : exclusive_or_expression { $$ = copyNode($1); }
  | inclusive_or_expression BITWISE_OR exclusive_or_expression {
      string s = string($1->lexeme) + string($2) + string($3->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType($1->type, $3->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string($1->type) + "\' to \'" + string($3->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        $$ = copyNode(&no);
      }
    }
  ;

exclusive_or_expression
  : and_expression { $$ = copyNode($1); }
  | exclusive_or_expression BITWISE_OR_EXC and_expression {
      string s = string($1->lexeme) + string($2) + string($3->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType($1->type, $3->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string($1->type) + "\' to \'" + string($3->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        $$ = copyNode(&no);
      }
    }
  ;

and_expression
  : equality_expression { $$ = copyNode($1); }
  | and_expression AMPERSAND equality_expression {
      string s = string($1->lexeme) + string($2) + string($3->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType($1->type, $3->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string($1->type) + "\' to \'" + string($3->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        $$ = copyNode(&no);
      }
    }
  ;

equality_expression
  : relational_expression { $$ = copyNode($1); }
  | equality_expression OP_EQ relational_expression {
      string s = string($1->lexeme) + string($2) + string($3->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType($1->type, $3->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string($1->type) + "\' to \'" + string($3->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        $$ = copyNode(&no);
      }
    }
  | equality_expression OP_NE relational_expression {
      string s = string($1->lexeme) + string($2) + string($3->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType($1->type, $3->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string($1->type) + "\' to \'" + string($3->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        $$ = copyNode(&no);
      }
    }
  ;

relational_expression
	: shift_expression { $$ = copyNode($1); }
  | relational_expression OP_LT shift_expression {
      string s = string($1->lexeme) + string($2) + string($3->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType($1->type, $3->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string($1->type) + "\' to \'" + string($3->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        $$ = copyNode(&no);
      }
    }
	| relational_expression OP_GT shift_expression {
      string s = string($1->lexeme) + string($2) + string($3->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType($1->type, $3->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string($1->type) + "\' to \'" + string($3->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        $$ = copyNode(&no);
      }
    }
	| relational_expression OP_LET shift_expression {
      string s = string($1->lexeme) + string($2) + string($3->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType($1->type, $3->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string($1->type) + "\' to \'" + string($3->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        $$ = copyNode(&no);
      }
    }
	| relational_expression OP_GET shift_expression {
      string s = string($1->lexeme) + string($2) + string($3->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType($1->type, $3->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string($1->type) + "\' to \'" + string($3->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        $$ = copyNode(&no);
      }
    }
	;

shift_expression
  : additive_expression { $$ = copyNode($1); }
  | shift_expression L_SHIFT additive_expression {
      string s = string($1->lexeme) + string($2) + string($3->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType($1->type, $3->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string($1->type) + "\' to \'" + string($3->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        $$ = copyNode(&no);
      }
    }
  | shift_expression R_SHIFT additive_expression {
      string s = string($1->lexeme) + string($2) + string($3->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType($1->type, $3->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string($1->type) + "\' to \'" + string($3->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        $$ = copyNode(&no);
      }
    }
  ;

additive_expression
  : multiplicative_expression { $$ = copyNode($1); }
  | additive_expression OP_PLUS multiplicative_expression {
      string s = string($1->lexeme) + string($2) + string($3->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType($1->type, $3->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string($1->type) + "\' to \'" + string($3->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        $$ = copyNode(&no);
      }
    }
	| additive_expression OP_MINUS multiplicative_expression {
      string s = string($1->lexeme) + string($2) + string($3->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType($1->type, $3->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string($1->type) + "\' to \'" + string($3->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        $$ = copyNode(&no);
      }
    }
  ;

multiplicative_expression
  : cast_expression { $$ = copyNode($1); }
	| multiplicative_expression OP_ASTERISK cast_expression {
      string s = string($1->lexeme) + string($2) + string($3->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType($1->type, $3->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string($1->type) + "\' to \'" + string($3->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        $$ = copyNode(&no);
      }
    }
	| multiplicative_expression OP_DIV cast_expression {
      string s = string($1->lexeme) + string($2) + string($3->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType($1->type, $3->type);
      $$ = copyNode(&no);
    }
	| multiplicative_expression OP_MOD cast_expression {
      string s = string($1->lexeme) + string($2) + string($3->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType($1->type, $3->type);
      $$ = copyNode(&no);
    }
  ;

cast_expression
  : unary_expression { $$ = copyNode($1); }
  | L_PAREN primitive_type_expression R_PAREN cast_expression {
      string s = string($1) + string($2) + string($3) + string($4->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = $2;
      $$ = copyNode(&no);
    }
	| L_PAREN user_type_expression R_PAREN cast_expression {
      string s = string($1) + string($2) + string($3) + string($4->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = $2;
      $$ = copyNode(&no);
    }
	| L_PAREN expression R_PAREN logical_unary_expression {
      string s = string($1) + string($2->lexeme) + string($3) + string($4->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = $2->type;
      $$ = copyNode(&no);
    }
  ;

primitive_type_expression
  : primitive_type
  | primitive_type dims
  ;

user_type_expression
  : qualified_name dims
  ;

assignment_operator
  : ASSIGN { $$ = strdup($1); }
  | ASSIGN_PLUS { $$ = strdup($1); }
  | ASSIGN_MINUS { $$ = strdup($1); }
  | ASSIGN_PRODUCT { $$ = strdup($1); }
  | ASSIGN_DIV { $$ = strdup($1); }
  | ASSIGN_MOD { $$ = strdup($1); }
  | ASSIGN_BITWISE_AND { $$ = strdup($1); }
  | ASSIGN_BITWISE_OR { $$ = strdup($1); }
  | ASSIGN_BITWISE_OR_EXC { $$ = strdup($1); }
  | ASSIGN_L_SHIFT { $$ = strdup($1); }
  | ASSIGN_R_SHIFT { $$ = strdup($1); }
  ;

not_just_name
  : complex_primary { $$ = copyNode($1); }
  ;

complex_primary
  : L_PAREN expression R_PAREN {
      string s = string($1) + string($2->lexeme) + string($3);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = $2->type;
      $$ = copyNode(&no);
    }
  | complex_primary_no_parenthesis { $$ = copyNode($1); }
  ;

complex_primary_no_parenthesis
  : BOOL_LITERAL { $$ = copyNode($1); }
  | OCTAL { $$ = copyNode($1); }
  | DECIMAL { $$ = copyNode($1); }
  | HEX { $$ = copyNode($1); }
  | FLOATING_POINT { $$ = copyNode($1); }
  | NNULL { $$ = copyNode($1); }
  | STRING_LITERAL { $$ = copyNode($1); }
  | array_access
  | field_access
  | subprogram_call
  ;

array_access
  : qualified_name L_SQ_PAREN expression R_SQ_PAREN
  | complex_primary L_SQ_PAREN expression R_SQ_PAREN
  ;

field_access
  : postfix_expression DOT IDENTIFIER
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

dim_exprs
  : dim_expr { $$ = strdup($1); }
  | dim_exprs dim_expr {
      string s = string($1) + string($2);
      $$ = strdup((char*) s.c_str());
    }
  ;

dim_expr
  : L_SQ_PAREN expression R_SQ_PAREN {
      if(strcmp($2->type, (char*) "int") != 0) {
        yyerror("size of array must be an integer");
        YYERROR;
      }
      string s = string($1) + string($2->lexeme) + string($3);
      $$ = strdup((char*) s.c_str());
    }
  ;

dims
  : L_SQ_PAREN R_SQ_PAREN
  | dims L_SQ_PAREN R_SQ_PAREN
  ;

%%

void yyerror(const char *s) {
	fprintf(stderr, "Error: %s at '%s' at line %i.\n", s, yytext, yylineno);
}

char* getType(string type1, string type2) {
  if(type1 == "int" && type2 == "int") {
    return (char*) "int";
  } else if((type1 == "int" && type2 == "double") || (type1 == "double" && type2 == "int")) {
    return (char*) "double";
  } else if((type1 == "int" && type2 == "long") || (type1 == "long" && type2 == "int")) {
    return (char*) "long";
  } else if(type1 == "long" && type2 == "long") {
    return (char*) "long";
  } else if(type1 == "bool" && type2 == "bool") {
    return (char*) "bool";
  } else if(type1 == "double" && type2 == "double") {
    return (char*) "double";
  } else if((type1 == "long" && type2 == "double") || (type1 == "double" && type2 == "long")) {
    return (char*) "double";
  } else if(type1 == "string" && type2 == "string") {
    return (char*) "string";
  } else {
    return NULL;
  }
}

/*bool isCompatible(string type1, string type2, string target) {
  if(type1 == target && type2 == target) {
    return true;
  } else if((type1 == "int" && type2 == "double") || (type1 == "double" && type2 == "int") && (target == "int" || target == "double")) {
    return true;
  } else if((type1 == "int" && type2 == "long") || (type1 == "long" && type2 == "int") && (target == "int" || target == "long")) {
    return true;
  } else if((type1 == "long" && type2 == "double") || (type1 == "double" && type2 == "long") && (target == "long" || target == "double")) {
    return true;
  } else {
    return false;
  }
}*/

bool isCompatible(string type1, string target) {
  if(type1 == target) {
    return true;
  } else if(type1 == "int" && target == "int") {
    return true;
  } else if((type1 == "int" && target == "double") || (type1 == "double" && target == "int")) {
    return true;
  } else if((type1 == "int" && target == "long") || (type1 == "long" && target == "int")) {
    return true;
  } else if(type1 == "long" && target == "long") {
    return true;
  } else if(type1 == "bool" && target == "bool") {
    return true;
  } else if(type1 == "double" && target == "double") {
    return true;
  } else if((type1 == "long" && target == "double") || (type1 == "double" && target == "long")) {
    return true;
  } else if(type1 == "string" && target == "string") {
    return true;
  } else if(target == "empty") {
    return true;
  } else {
    return false;
  }
}

nodeType* copyNode(nodeType* orig) {
  nodeType* no = new nodeType();
  no->lexeme = strdup(orig->lexeme);
  no->type = strdup(orig->type);
  return no;
}

string pointersOfAType(string decl) {
  string s = "";
  for(int i = 0; i < decl.size(); i++) {
    if(decl[i] == '[') {
      s += "*";
    }
  }
  return s;
}

string filterIDofArray(string decl) {
  string id = "";
  for(int i = 0; i < decl.size(); i++) {
    if(decl[i] != '[') {
      id += decl[i];
    } else {
      break;
    }
  }
  return id;
}

string ignorePointers(string decl) {
  string s = "";
  for(int i = 0; i < decl.size(); i++) {
    if(decl[i] != '*') {
      s += decl[i];
    } else {
      break;
    }
  }
  return s;
}

bool isPointer(string id) {
  for(int i = 0; i < id.size(); i++) {
    if(id[i] == '*') {
      return true;
    }
  }
  return false;
}
