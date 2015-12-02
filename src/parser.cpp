/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 7 "src/parser.y" /* yacc.c:339  */

#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <fstream>
#include <cstring>
#include <typeinfo>
#include <list>

#include "TypesTable.hpp"
#include "VariableEntry.hpp"
#include "VariableTable.hpp"
#include "SubprogramEntry.hpp"
#include "SubprogramTable.hpp"

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

void fileHeader();

TypesTable typesTable;

VariableTable *env = new VariableTable(NULL);

SubprogramTable subTable;

ofstream out(fileOutputName.c_str());

string typeToStore = "";

string idBeingDeclared = "";

list<string> parametersType;

std::map<std::string, VariableEntry> vTableTemp;


#line 129 "src/parser.cpp" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parser.hpp".  */
#ifndef YY_YY_SRC_PARSER_HPP_INCLUDED
# define YY_YY_SRC_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif
/* "%code requires" blocks.  */
#line 70 "src/parser.y" /* yacc.c:355  */

  typedef struct {
    char* type;     /* type associated */
    char* lexeme;   /* lexeme -- string */
  } nodeType;

  nodeType* copyNode(nodeType* orig);

#line 168 "src/parser.cpp" /* yacc.c:355  */

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    ASSIGN = 259,
    ASSIGN_PLUS = 260,
    ASSIGN_MINUS = 261,
    ASSIGN_PRODUCT = 262,
    ASSIGN_DIV = 263,
    ASSIGN_MOD = 264,
    ASSIGN_BITWISE_AND = 265,
    ASSIGN_BITWISE_OR = 266,
    ASSIGN_BITWISE_OR_EXC = 267,
    ASSIGN_L_SHIFT = 268,
    ASSIGN_R_SHIFT = 269,
    AMPERSAND = 270,
    AUTO = 271,
    BOOL = 272,
    BREAK = 273,
    BITWISE_COMPLEMENT = 274,
    BITWISE_OR = 275,
    BITWISE_OR_EXC = 276,
    DOT = 277,
    CHAR = 278,
    COMMA = 279,
    CONTINUE = 280,
    CONST = 281,
    ENUM = 282,
    ELSE = 283,
    ELSIF = 284,
    DOUBLE = 285,
    FOR = 286,
    IF = 287,
    INT = 288,
    L_PAREN = 289,
    L_SQ_PAREN = 290,
    L_BRACE = 291,
    L_SHIFT = 292,
    LOG_NOT = 293,
    LOG_AND = 294,
    LOG_OR = 295,
    LOG_SC_AND = 296,
    LOG_SC_OR = 297,
    LONG = 298,
    OP_EQ = 299,
    OP_NE = 300,
    OP_PTR = 301,
    OP_PLUS = 302,
    OP_MINUS = 303,
    OP_ASTERISK = 304,
    OP_DIV = 305,
    OP_MOD = 306,
    OP_LET = 307,
    OP_LT = 308,
    OP_GET = 309,
    OP_GT = 310,
    PRINT = 311,
    PRINTLN = 312,
    R_PAREN = 313,
    R_SQ_PAREN = 314,
    R_BRACE = 315,
    R_SHIFT = 316,
    STRING = 317,
    STRUCT = 318,
    STATIC = 319,
    SIZEOF = 320,
    READ = 321,
    RETURN = 322,
    SEMICOLON = 323,
    UNION = 324,
    WHILE = 325,
    END_CASE = 326,
    END_ENUM = 327,
    END_FOR = 328,
    END_FUNCTION = 329,
    END_IF = 330,
    END_PROCEDURE = 331,
    END_STRUCT = 332,
    END_UNION = 333,
    END_WHILE = 334,
    FUNCTION = 335,
    PROCEDURE = 336,
    CASE = 337,
    THEN = 338,
    TYPEOF = 339,
    WHEN = 340,
    STRING_LITERAL = 341,
    DECIMAL = 342,
    HEX = 343,
    OCTAL = 344,
    FLOATING_POINT = 345,
    BOOL_LITERAL = 346,
    NNULL = 347
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 79 "src/parser.y" /* yacc.c:355  */

	char* lexeme;
  nodeType* node;

#line 278 "src/parser.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_SRC_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 293 "src/parser.cpp" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  34
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   795

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  93
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  84
/* YYNRULES -- Number of rules.  */
#define YYNRULES  196
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  347

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   347

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   137,   137,   145,   149,   150,   154,   155,   156,   157,
     161,   171,   171,   181,   195,   210,   211,   218,   223,   231,
     232,   236,   240,   241,   248,   249,   253,   257,   264,   265,
     266,   267,   268,   269,   270,   274,   275,   276,   280,   281,
     282,   286,   290,   291,   292,   296,   297,   298,   302,   303,
     307,   311,   312,   316,   320,   321,   322,   323,   324,   325,
     329,   330,   334,   338,   342,   343,   344,   348,   349,   356,
     362,   371,   372,   380,   381,   385,   392,   393,   397,   398,
     399,   400,   401,   402,   406,   407,   411,   412,   416,   417,
     421,   435,   436,   440,   444,   445,   449,   453,   454,   462,
     472,   487,   488,   496,   497,   508,   522,   523,   538,   542,
     543,   559,   566,   570,   571,   581,   585,   586,   590,   591,
     595,   596,   600,   601,   602,   618,   619,   620,   636,   637,
     653,   654,   670,   671,   687,   688,   701,   717,   718,   731,
     744,   757,   773,   774,   787,   803,   804,   817,   833,   834,
     847,   854,   864,   865,   872,   879,   889,   890,   894,   898,
     899,   900,   901,   902,   903,   904,   905,   906,   907,   908,
     912,   916,   923,   927,   928,   929,   930,   931,   932,   933,
     934,   935,   936,   940,   941,   945,   951,   952,   956,   957,
     961,   962,   966,   967,   974,   985,   986
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "ASSIGN", "ASSIGN_PLUS",
  "ASSIGN_MINUS", "ASSIGN_PRODUCT", "ASSIGN_DIV", "ASSIGN_MOD",
  "ASSIGN_BITWISE_AND", "ASSIGN_BITWISE_OR", "ASSIGN_BITWISE_OR_EXC",
  "ASSIGN_L_SHIFT", "ASSIGN_R_SHIFT", "AMPERSAND", "AUTO", "BOOL", "BREAK",
  "BITWISE_COMPLEMENT", "BITWISE_OR", "BITWISE_OR_EXC", "DOT", "CHAR",
  "COMMA", "CONTINUE", "CONST", "ENUM", "ELSE", "ELSIF", "DOUBLE", "FOR",
  "IF", "INT", "L_PAREN", "L_SQ_PAREN", "L_BRACE", "L_SHIFT", "LOG_NOT",
  "LOG_AND", "LOG_OR", "LOG_SC_AND", "LOG_SC_OR", "LONG", "OP_EQ", "OP_NE",
  "OP_PTR", "OP_PLUS", "OP_MINUS", "OP_ASTERISK", "OP_DIV", "OP_MOD",
  "OP_LET", "OP_LT", "OP_GET", "OP_GT", "PRINT", "PRINTLN", "R_PAREN",
  "R_SQ_PAREN", "R_BRACE", "R_SHIFT", "STRING", "STRUCT", "STATIC",
  "SIZEOF", "READ", "RETURN", "SEMICOLON", "UNION", "WHILE", "END_CASE",
  "END_ENUM", "END_FOR", "END_FUNCTION", "END_IF", "END_PROCEDURE",
  "END_STRUCT", "END_UNION", "END_WHILE", "FUNCTION", "PROCEDURE", "CASE",
  "THEN", "TYPEOF", "WHEN", "STRING_LITERAL", "DECIMAL", "HEX", "OCTAL",
  "FLOATING_POINT", "BOOL_LITERAL", "NNULL", "$accept", "translation_unit",
  "program_file", "declarations", "declaration", "function_declaration",
  "procedure_declaration", "$@1", "subprogram_declarator",
  "parameter_list", "parameter", "subprogram_body", "block",
  "local_variable_declarations_and_statements",
  "local_variable_declarations_or_statements",
  "local_variable_declaration_statement", "statement",
  "selection_statement", "elsif_staments", "elsif_stament",
  "iteration_statement", "for_init", "for_expr", "for_incr",
  "expression_statements", "expression_statement", "jump_statement",
  "read_statement", "print_statement", "println_statement",
  "type_declaration", "variable_declarations", "variable_declaration",
  "modifiers", "modifier", "type_specifier", "type_name", "primitive_type",
  "discriminant", "enumerator_list", "enumerator", "qualified_name",
  "union_body", "short_case_statement", "choices", "choice",
  "variable_declarators", "variable_declarator", "declarator_name",
  "variable_initializer", "array_initializers", "expression",
  "assignment_expression", "unary_expression", "logical_unary_expression",
  "postfix_expression", "primary_expression", "arithmetic_unary_operator",
  "logical_unary_operator", "conditional_or_expression",
  "conditional_and_expression", "inclusive_or_expression",
  "exclusive_or_expression", "and_expression", "equality_expression",
  "relational_expression", "shift_expression", "additive_expression",
  "multiplicative_expression", "cast_expression",
  "primitive_type_expression", "user_type_expression",
  "assignment_operator", "not_just_name", "complex_primary",
  "complex_primary_no_parenthesis", "array_access", "field_access",
  "subprogram_call", "subprogram_access", "argument_list", "dim_exprs",
  "dim_expr", "dims", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347
};
# endif

#define YYPACT_NINF -129

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-129)))

#define YYTABLE_NINF -190

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     214,  -129,  -129,  -129,  -129,    26,  -129,  -129,  -129,  -129,
      67,  -129,    89,   219,  -129,     4,  -129,   214,  -129,  -129,
    -129,  -129,  -129,   309,  -129,   120,  -129,  -129,  -129,   142,
     309,   122,   159,   159,  -129,  -129,  -129,   120,  -129,    13,
    -129,    27,   168,    -8,  -129,   162,  -129,   219,   309,   155,
     331,   331,    16,   120,  -129,   506,   695,   141,  -129,   695,
     142,  -129,  -129,  -129,   120,   147,   124,   677,     6,  -129,
       7,   172,   173,   180,  -129,  -129,  -129,   174,   178,   219,
     181,   572,  -129,   182,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,   145,  -129,   408,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,   120,   119,   152,   642,  -129,   203,  -129,
     695,   703,   109,    14,   213,   216,   223,   -12,    75,    24,
      92,    83,  -129,  -129,   199,   211,  -129,  -129,  -129,   217,
     177,  -129,  -129,   498,   126,  -129,  -129,  -129,   191,  -129,
    -129,  -129,   -15,   252,  -129,  -129,   219,  -129,    33,  -129,
     120,   188,  -129,   190,  -129,   473,   695,   225,   150,   205,
     215,   224,   695,   695,   120,   175,  -129,   206,   695,  -129,
    -129,    48,   695,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
    -129,  -129,  -129,  -129,  -129,   695,   281,  -129,  -129,   695,
    -129,   695,   695,   695,   695,   695,   695,   695,   695,   695,
     695,   695,   695,   695,   695,   695,   695,   695,   695,   695,
     695,   695,   580,  -129,  -129,  -129,     3,  -129,  -129,   200,
     120,     9,  -129,   141,  -129,  -129,  -129,  -129,   597,    53,
    -129,  -129,   228,   229,   255,   671,   255,   317,   695,   695,
     233,   234,    56,    36,  -129,   235,  -129,   237,  -129,  -129,
     241,    14,    14,   213,   213,   216,   223,   -12,    75,    75,
      24,    24,    24,    24,    92,    92,    83,    83,  -129,  -129,
    -129,   242,  -129,  -129,    59,   506,  -129,   299,    73,  -129,
     141,  -129,  -129,   678,   236,   695,  -129,   408,  -129,   244,
    -129,  -129,  -129,   238,   239,  -129,   695,   243,   408,  -129,
    -129,  -129,   695,  -129,  -129,   222,  -129,  -129,   408,   251,
     286,  -129,  -129,    40,  -129,  -129,  -129,    62,  -129,   240,
    -129,   309,   245,   408,   408,    54,  -129,   246,  -129,   309,
    -129,   249,   253,   408,   695,   -21,  -129,  -129,  -129,  -129,
    -129,   257,   279,  -129,   408,  -129,  -129
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    90,    78,    79,    73,     0,    82,    80,    81,    83,
       0,    74,     0,     0,    11,     0,     2,     3,     4,     6,
       7,     8,     9,     0,    71,     0,    75,    76,    77,     0,
       0,    85,     0,     0,     1,     5,    72,     0,   101,     0,
      97,    99,    89,     0,    86,     0,    67,     0,     0,     0,
       0,     0,     0,     0,    70,     0,     0,   102,   192,     0,
       0,    66,    64,    68,     0,    92,     0,     0,     0,   120,
       0,     0,     0,     0,   121,   118,   119,     0,     0,     0,
       0,     0,    20,     0,   179,   175,   176,   174,   177,   173,
     178,     0,    19,    21,    22,    24,    25,    29,    30,    31,
      32,    33,    34,     0,   116,     0,   152,   112,   113,   115,
       0,     0,   109,   122,   125,   128,   130,   132,   134,   137,
     142,   145,   148,   117,   170,   172,   180,   181,   182,     0,
       0,    69,    98,     0,   116,   100,   103,   108,     0,   193,
      88,    87,     0,     0,    91,    65,     0,    14,     0,    15,
       0,     0,    55,     0,    57,     0,     0,   156,   116,     0,
       0,     0,     0,     0,     0,     0,    59,     0,     0,    10,
      23,     0,     0,    28,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,     0,     0,   152,   111,     0,
     114,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,   104,   106,     0,   194,    84,     0,
       0,     0,    13,    17,    54,    56,    47,    46,     0,     0,
      51,    53,     0,     0,   157,     0,   158,   171,     0,     0,
       0,     0,     0,     0,    58,     0,    26,     0,   110,   185,
       0,   123,   124,   126,   127,   129,   131,   133,   135,   136,
     140,   138,   141,   139,   143,   144,   146,   147,   149,   150,
     151,     0,   187,   190,     0,     0,   105,     0,     0,    94,
      18,    16,    49,     0,     0,     0,    45,     0,   195,     0,
     155,   153,   154,     0,     0,    27,     0,     0,     0,   183,
     171,   184,     0,   186,   107,     0,    93,    95,     0,     0,
      50,    48,    52,     0,   196,    62,    63,     0,    61,     0,
     191,     0,     0,     0,     0,     0,    37,     0,    42,    96,
      44,     0,     0,     0,     0,     0,    38,    60,    43,    36,
      40,     0,     0,    35,     0,    39,    41
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -129,  -129,  -129,  -129,   300,  -129,  -129,  -129,   283,  -129,
     106,   280,   160,  -129,   248,   183,  -129,  -129,  -129,    12,
    -129,  -129,  -129,  -129,    60,    52,  -129,  -129,  -129,  -129,
    -129,   -46,     1,  -129,   322,    11,  -129,   273,  -129,  -129,
     293,     0,  -129,  -129,  -129,    79,   -16,   305,   -61,  -128,
    -129,   -37,   -44,   -96,   123,  -129,  -129,  -129,  -129,  -129,
     -10,    -7,   164,   170,   171,    -5,   -32,    -4,    -3,   -72,
    -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,  -129,
      71,  -129,   313,   218
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    19,    20,    33,    50,   148,
     149,    91,    92,    93,    94,    95,    96,    97,   335,   336,
      98,   228,   283,   309,   229,   230,    99,   100,   101,   102,
      21,    45,    46,    23,    24,   103,    26,    27,    48,    43,
      44,   134,    66,   144,   278,   279,    39,    40,    41,   135,
     216,   136,   137,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     160,   161,   185,   123,   124,   125,   126,   127,   128,   129,
     274,    57,    58,   234
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      28,    22,    65,   142,    34,   215,   105,   105,   342,   151,
     153,    25,     1,    28,   187,   190,    60,    28,    22,   138,
      56,    52,   140,    28,    32,     2,     3,   275,    25,    29,
      28,    55,   198,   199,    37,   146,   159,    53,   188,     6,
      53,    25,     7,   218,   167,    28,    63,    28,    28,   105,
     104,   104,     8,   193,   343,   194,    25,   221,    64,    25,
     296,   204,    56,   276,    61,    28,    63,    28,   324,   325,
      30,     9,    53,   158,   152,   154,    25,   285,   150,    28,
      53,    54,   333,   302,   131,   205,   302,   171,   334,   223,
     164,   222,    31,   104,   297,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   187,   187,   187,   187,   187,
     187,   187,   187,   187,   187,   326,   246,   303,   231,   232,
     327,   286,   -77,    38,   295,   240,   241,   200,   201,   202,
     203,   245,   208,   209,   210,   247,   268,   269,   270,   206,
     207,   248,   187,   187,   306,    42,    28,   304,   242,   191,
       1,   192,   250,  -189,   172,   104,    47,   220,   277,   280,
    -189,   172,    49,     2,     3,     1,   291,   292,   260,   261,
     262,   263,    59,     4,   271,   273,    56,     6,     2,     3,
       7,   251,   252,     1,  -189,   235,   253,   254,     4,    67,
       8,   284,     6,   258,   259,     7,     2,     3,   247,    69,
     264,   265,   145,   266,   267,     8,   155,   156,   162,     9,
       6,    11,   163,     7,    73,   165,   168,     1,    74,   169,
     173,    28,     1,     8,     9,   186,    11,    75,    76,   143,
       2,     3,   150,   195,   211,     2,     3,   196,   197,    62,
       4,     5,     9,   105,     6,  -188,   231,     7,   231,     6,
     217,   212,     7,   213,   105,   219,   224,     8,   225,   273,
     233,   243,     8,   237,   105,   320,    84,    85,    86,    87,
      88,    89,    90,   238,   244,   329,     9,    10,    11,   105,
     105,     9,   239,    12,   249,   277,   287,   104,   288,   105,
     289,   293,   294,   298,    13,    14,   299,   341,   104,   300,
     105,   301,   305,   314,   311,   321,   315,   316,   104,   323,
     285,   318,     1,   334,   337,   344,    51,    35,   330,   328,
       1,    28,   338,   104,   104,     2,     3,   281,   339,    28,
      63,   130,    25,   104,     1,     4,    69,   312,   227,     6,
      25,   170,     7,   310,   104,    36,   157,     2,     3,    68,
      69,   189,     8,   141,   345,    74,    70,   307,   132,   255,
     290,     6,    71,    72,     7,    73,   256,   317,   257,    74,
     139,     9,     0,    11,     8,     0,   236,     0,    75,    76,
       0,     0,     0,     0,     0,     0,     0,    77,    78,     0,
       0,     0,     0,     9,     0,    79,     0,    80,    81,    82,
       0,    83,     0,    84,    85,    86,    87,    88,    89,    90,
       0,     1,     0,     0,     0,     0,     0,    84,    85,    86,
      87,    88,    89,    90,     2,     3,    68,    69,     0,     0,
       0,     0,     0,    70,     0,     0,     0,     0,     6,    71,
      72,     7,    73,     0,     0,     0,    74,   313,     0,     0,
       0,     8,     0,     0,     0,    75,    76,     0,   319,     0,
       0,     0,     0,     0,    77,    78,     0,     0,   322,     0,
       9,     0,    79,     0,    80,    81,     1,     0,    83,     0,
       0,     0,     0,   331,   332,     0,     0,     0,     0,     2,
       3,     0,    69,   340,    84,    85,    86,    87,    88,    89,
      90,     1,     0,     6,   346,     0,     7,    73,     0,     1,
       0,    74,     0,     0,     0,     0,     8,    69,     0,     0,
      75,    76,     0,     0,     0,    69,     0,     0,     0,     0,
       0,     0,    73,     0,   133,     9,    74,    79,     0,     0,
      73,   226,   133,     0,    74,    75,    76,     0,     0,     0,
       0,     0,     0,    75,    76,     0,     0,     0,   214,    84,
      85,    86,    87,    88,    89,    90,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     1,    84,    85,    86,    87,    88,    89,
      90,    69,    84,    85,    86,    87,    88,    89,    90,    69,
       1,     0,     0,     0,     0,     0,    73,     0,     0,     0,
      74,     0,     0,     0,    73,     0,    69,     0,    74,    75,
      76,     0,     0,     0,     0,     0,     0,    75,    76,     0,
       0,    73,     0,     0,     0,    74,     0,     0,   272,     0,
     166,     0,     0,     0,    75,    76,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,     0,    84,    85,
      86,    87,    88,    89,    90,   282,    84,    85,    86,    87,
      88,    89,    90,     0,     1,     0,     0,     0,     0,     0,
       1,     1,     0,    84,    85,    86,    87,    88,    89,    90,
      69,     0,     0,     2,     3,     0,     0,    69,     1,     0,
       0,     0,     0,   146,     0,    73,     1,     6,     0,    74,
       7,     0,    73,     0,    69,     0,    74,     0,    75,    76,
       8,     0,    69,     0,     0,    75,    76,     0,     0,    73,
     288,     0,     0,    74,     0,   147,   308,   189,     0,     9,
       0,    74,    75,    76,     0,     0,     0,     0,     0,     0,
      75,    76,     0,     0,     0,     0,     0,    84,    85,    86,
      87,    88,    89,    90,    84,    85,    86,    87,    88,    89,
      90,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    85,    86,    87,    88,    89,    90,     0,    84,
      85,    86,    87,    88,    89,    90
};

static const yytype_int16 yycheck[] =
{
       0,     0,    48,    64,     0,   133,    50,    51,    29,     3,
       3,     0,     3,    13,   110,   111,    24,    17,    17,    56,
      35,    37,    59,    23,    13,    16,    17,    24,    17,     3,
      30,     4,    44,    45,    23,    26,    73,    24,   110,    30,
      24,    30,    33,    58,    81,    45,    45,    47,    48,    93,
      50,    51,    43,    39,    75,    41,    45,    24,    47,    48,
      24,    37,    35,    60,    72,    65,    65,    67,    28,    29,
       3,    62,    24,    73,    68,    68,    65,    24,    67,    79,
      24,    68,    28,    24,    68,    61,    24,   103,    34,   150,
      79,    58,     3,    93,    58,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,    75,    68,    58,   155,   156,
      58,    68,     3,     3,    68,   162,   163,    52,    53,    54,
      55,   168,    49,    50,    51,   172,   208,   209,   210,    47,
      48,   185,   238,   239,    71,     3,   146,   275,   164,    40,
       3,    42,   189,    34,    35,   155,    34,   146,    85,   220,
      34,    35,     3,    16,    17,     3,   238,   239,   200,   201,
     202,   203,     4,    26,   211,   212,    35,    30,    16,    17,
      33,   191,   192,     3,    34,    35,   193,   194,    26,    34,
      43,   228,    30,   198,   199,    33,    16,    17,   235,    19,
     204,   205,    78,   206,   207,    43,    34,    34,    34,    62,
      30,    64,    34,    33,    34,    34,    34,     3,    38,    74,
      68,   221,     3,    43,    62,    22,    64,    47,    48,    82,
      16,    17,   221,    20,    35,    16,    17,    21,    15,    77,
      26,    27,    62,   287,    30,    34,   283,    33,   285,    30,
      59,    34,    33,    76,   298,     3,    68,    43,    68,   296,
      35,    86,    43,    58,   308,   302,    86,    87,    88,    89,
      90,    91,    92,    58,    68,   321,    62,    63,    64,   323,
     324,    62,    58,    69,     3,    85,    58,   287,    59,   333,
      35,    58,    58,    58,    80,    81,    59,   334,   298,    58,
     344,    59,     3,    59,    68,    83,    68,    68,   308,    58,
      24,    68,     3,    34,    68,    58,    33,    17,    73,    79,
       3,   321,    73,   323,   324,    16,    17,   221,    75,   329,
     329,    51,   321,   333,     3,    26,    19,   285,   155,    30,
     329,    93,    33,   283,   344,    23,    73,    16,    17,    18,
      19,    34,    43,    60,   342,    38,    25,   278,    53,   195,
     237,    30,    31,    32,    33,    34,   196,   296,   197,    38,
      57,    62,    -1,    64,    43,    -1,   158,    -1,    47,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    57,    -1,
      -1,    -1,    -1,    62,    -1,    64,    -1,    66,    67,    68,
      -1,    70,    -1,    86,    87,    88,    89,    90,    91,    92,
      -1,     3,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    92,    16,    17,    18,    19,    -1,    -1,
      -1,    -1,    -1,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    38,   287,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    47,    48,    -1,   298,    -1,
      -1,    -1,    -1,    -1,    56,    57,    -1,    -1,   308,    -1,
      62,    -1,    64,    -1,    66,    67,     3,    -1,    70,    -1,
      -1,    -1,    -1,   323,   324,    -1,    -1,    -1,    -1,    16,
      17,    -1,    19,   333,    86,    87,    88,    89,    90,    91,
      92,     3,    -1,    30,   344,    -1,    33,    34,    -1,     3,
      -1,    38,    -1,    -1,    -1,    -1,    43,    19,    -1,    -1,
      47,    48,    -1,    -1,    -1,    19,    -1,    -1,    -1,    -1,
      -1,    -1,    34,    -1,    36,    62,    38,    64,    -1,    -1,
      34,    68,    36,    -1,    38,    47,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    60,    86,
      87,    88,    89,    90,    91,    92,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,    86,    87,    88,    89,    90,    91,
      92,    19,    86,    87,    88,    89,    90,    91,    92,    19,
       3,    -1,    -1,    -1,    -1,    -1,    34,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    34,    -1,    19,    -1,    38,    47,
      48,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,
      -1,    34,    -1,    -1,    -1,    38,    -1,    -1,    58,    -1,
      68,    -1,    -1,    -1,    47,    48,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    -1,    86,    87,
      88,    89,    90,    91,    92,    68,    86,    87,    88,    89,
      90,    91,    92,    -1,     3,    -1,    -1,    -1,    -1,    -1,
       3,     3,    -1,    86,    87,    88,    89,    90,    91,    92,
      19,    -1,    -1,    16,    17,    -1,    -1,    19,     3,    -1,
      -1,    -1,    -1,    26,    -1,    34,     3,    30,    -1,    38,
      33,    -1,    34,    -1,    19,    -1,    38,    -1,    47,    48,
      43,    -1,    19,    -1,    -1,    47,    48,    -1,    -1,    34,
      59,    -1,    -1,    38,    -1,    58,    58,    34,    -1,    62,
      -1,    38,    47,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      47,    48,    -1,    -1,    -1,    -1,    -1,    86,    87,    88,
      89,    90,    91,    92,    86,    87,    88,    89,    90,    91,
      92,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    86,    87,    88,    89,    90,    91,    92,    -1,    86,
      87,    88,    89,    90,    91,    92
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    16,    17,    26,    27,    30,    33,    43,    62,
      63,    64,    69,    80,    81,    94,    95,    96,    97,    98,
      99,   123,   125,   126,   127,   128,   129,   130,   134,     3,
       3,     3,   128,   100,     0,    97,   127,   128,     3,   139,
     140,   141,     3,   132,   133,   124,   125,    34,   131,     3,
     101,   101,   139,    24,    68,     4,    35,   174,   175,     4,
      24,    72,    77,   125,   128,   124,   135,    34,    18,    19,
      25,    31,    32,    34,    38,    47,    48,    56,    57,    64,
      66,    67,    68,    70,    86,    87,    88,    89,    90,    91,
      92,   104,   105,   106,   107,   108,   109,   110,   113,   119,
     120,   121,   122,   128,   134,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   166,   167,   168,   169,   170,   171,   172,
     104,    68,   140,    36,   134,   142,   144,   145,   144,   175,
     144,   133,   141,    82,   136,    78,    26,    58,   102,   103,
     128,     3,    68,     3,    68,    34,    34,   130,   134,   144,
     163,   164,    34,    34,   128,    34,    68,   144,    34,    74,
     107,   139,    35,    68,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,   165,    22,   146,   162,    34,
     146,    40,    42,    39,    41,    20,    21,    15,    44,    45,
      52,    53,    54,    55,    37,    61,    47,    48,    49,    50,
      51,    35,    34,    76,    60,   142,   143,    59,    58,     3,
     128,    24,    58,   141,    68,    68,    68,   108,   114,   117,
     118,   144,   144,    35,   176,    35,   176,    58,    58,    58,
     144,   144,   139,    86,    68,   144,    68,   144,   145,     3,
     144,   153,   153,   154,   154,   155,   156,   157,   158,   158,
     159,   159,   159,   159,   160,   160,   161,   161,   162,   162,
     162,   144,    58,   144,   173,    24,    60,    85,   137,   138,
     141,   103,    68,   115,   144,    24,    68,    58,    59,    35,
     147,   162,   162,    58,    58,    68,    24,    58,    58,    59,
      58,    59,    24,    58,   142,     3,    71,   138,    58,   116,
     117,    68,   118,   105,    59,    68,    68,   173,    68,   105,
     144,    83,   105,    58,    28,    29,    75,    58,    79,   124,
      73,   105,   105,    28,    34,   111,   112,    68,    73,    75,
     105,   144,    29,    75,    58,   112,   105
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    93,    94,    95,    96,    96,    97,    97,    97,    97,
      98,   100,    99,   101,   101,   102,   102,   103,   103,   104,
     104,   105,   106,   106,   107,   107,   108,   108,   109,   109,
     109,   109,   109,   109,   109,   110,   110,   110,   111,   111,
     111,   112,   113,   113,   113,   114,   114,   114,   115,   115,
     116,   117,   117,   118,   119,   119,   119,   119,   119,   119,
     120,   120,   121,   122,   123,   123,   123,   124,   124,   125,
     125,   126,   126,   127,   127,   128,   129,   129,   130,   130,
     130,   130,   130,   130,   131,   131,   132,   132,   133,   133,
     134,   135,   135,   136,   137,   137,   138,   139,   139,   140,
     140,   141,   141,   142,   142,   142,   143,   143,   144,   145,
     145,   146,   146,   147,   147,   148,   149,   149,   150,   150,
     151,   151,   152,   152,   152,   153,   153,   153,   154,   154,
     155,   155,   156,   156,   157,   157,   157,   158,   158,   158,
     158,   158,   159,   159,   159,   160,   160,   160,   161,   161,
     161,   161,   162,   162,   162,   162,   163,   163,   164,   165,
     165,   165,   165,   165,   165,   165,   165,   165,   165,   165,
     166,   167,   167,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   169,   169,   170,   171,   171,   172,   172,
     173,   173,   174,   174,   175,   176,   176
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     1,     1,     1,
       5,     0,     5,     4,     3,     1,     3,     2,     3,     1,
       1,     1,     1,     2,     1,     1,     3,     4,     2,     1,
       1,     1,     1,     1,     1,     8,     8,     6,     1,     3,
       2,     4,     6,     8,     7,     2,     1,     1,     2,     1,
       1,     1,     3,     1,     3,     2,     3,     2,     3,     2,
       7,     5,     5,     5,     4,     5,     4,     1,     2,     4,
       3,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     4,     0,     1,     3,     3,     1,
       1,     2,     1,     4,     1,     2,     4,     1,     3,     1,
       3,     1,     2,     1,     2,     3,     1,     3,     1,     1,
       3,     2,     1,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     1,     3,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     3,     1,     3,
       3,     3,     1,     4,     4,     4,     1,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     4,     4,     3,     4,     3,     1,     1,
       1,     3,     1,     2,     3,     2,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 137 "src/parser.y" /* yacc.c:1646  */
    {
      out << "int main() { return 0; }\n";
      out.close();
      delete env;
    }
#line 1755 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 6:
#line 154 "src/parser.y" /* yacc.c:1646  */
    { out << (yyvsp[0].lexeme) << endl; free((yyvsp[0].lexeme)); }
#line 1761 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 7:
#line 155 "src/parser.y" /* yacc.c:1646  */
    { out << (yyvsp[0].lexeme) << endl; free((yyvsp[0].lexeme)); }
#line 1767 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 9:
#line 157 "src/parser.y" /* yacc.c:1646  */
    { out << (yyvsp[0].lexeme) << endl; free((yyvsp[0].lexeme)); }
#line 1773 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 10:
#line 161 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-3].lexeme)) + " " + string((yyvsp[-2].lexeme)) + "{\n" + string((yyvsp[-1].lexeme)) + "\n}\n";
      SubprogramEntry* se = subTable.get(string(idBeingDeclared));
      se->setReturnType(string((yyvsp[-3].lexeme)));
      idBeingDeclared = "";
      (yyval.lexeme) = strdup((char*) s.c_str());
    }
#line 1785 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 11:
#line 171 "src/parser.y" /* yacc.c:1646  */
    { int a; cout << "pega merda\n"; }
#line 1791 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 12:
#line 171 "src/parser.y" /* yacc.c:1646  */
    {
      string s = "void " + string((yyvsp[-2].lexeme)) + "{\n" + string((yyvsp[-1].lexeme))+ "\n}\n";
      SubprogramEntry* se = subTable.get(string(idBeingDeclared));
      se->setReturnType("");
      idBeingDeclared = "";
      (yyval.lexeme) = strdup((char*) s.c_str());
    }
#line 1803 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 13:
#line 181 "src/parser.y" /* yacc.c:1646  */
    {
      if(env->get(string((yyvsp[-3].lexeme))) == NULL && subTable.get(string((yyvsp[-3].lexeme))) == NULL) {
        string s = string((yyvsp[-3].lexeme)) + string((yyvsp[-2].lexeme)) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].lexeme));
        SubprogramEntry se;
        se.setParametersType(parametersType);
        parametersType.clear();
        subTable.put(string((yyvsp[-3].lexeme)), se);
        idBeingDeclared = string((yyvsp[-3].lexeme));
        (yyval.lexeme) = strdup((char*) s.c_str());
      } else {
        yyerror("Identifier name already used");
        YYERROR;
      }
    }
#line 1822 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 14:
#line 195 "src/parser.y" /* yacc.c:1646  */
    {
      if(env->get(string((yyvsp[-2].lexeme))) == NULL && subTable.get(string((yyvsp[-2].lexeme))) == NULL) {
        string s = string((yyvsp[-2].lexeme)) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].lexeme));
        SubprogramEntry se;
        subTable.put(string((yyvsp[-2].lexeme)), se);
        idBeingDeclared = string((yyvsp[-2].lexeme));
        (yyval.lexeme) = strdup((char*) s.c_str());
      } else {
        yyerror("Identifier name already used");
        YYERROR;
      }
    }
#line 1839 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 15:
#line 210 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 1845 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 16:
#line 211 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].lexeme)) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].lexeme));
      (yyval.lexeme) = strdup((char*) s.c_str());
    }
#line 1854 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 17:
#line 218 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-1].lexeme)) + " " + string((yyvsp[0].lexeme));
      parametersType.push_back(string((yyvsp[-1].lexeme)));
      (yyval.lexeme) = strdup((char*) s.c_str());
    }
#line 1864 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 18:
#line 223 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].lexeme)) + " " + string((yyvsp[-1].lexeme)) + " " + string((yyvsp[0].lexeme));
      parametersType.push_back(string((yyvsp[-1].lexeme)));
      (yyval.lexeme) = strdup((char*) s.c_str());
    }
#line 1874 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 19:
#line 231 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 1880 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 20:
#line 232 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 1886 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 21:
#line 236 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 1892 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 22:
#line 240 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 1898 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 23:
#line 241 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-1].lexeme)) + "\n" + string((yyvsp[0].lexeme));
      (yyval.lexeme) = strdup((char*) s.c_str());
    }
#line 1907 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 24:
#line 248 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 1913 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 25:
#line 249 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 1919 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 26:
#line 253 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].lexeme)) + " " + string((yyvsp[-1].lexeme)) + string((yyvsp[0].lexeme));
      (yyval.lexeme) = strdup((char*) s.c_str());
    }
#line 1928 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 27:
#line 257 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-3].lexeme)) + " " + string((yyvsp[-2].lexeme)) + " " + string((yyvsp[-1].lexeme)) + string((yyvsp[0].lexeme));
      (yyval.lexeme) = strdup((char*) s.c_str());
    }
#line 1937 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 67:
#line 348 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 1943 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 68:
#line 349 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-1].lexeme)) + string((yyvsp[0].lexeme));
      (yyval.lexeme) = strdup((char*) s.c_str());
    }
#line 1952 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 69:
#line 356 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-3].lexeme)) + " " + string((yyvsp[-2].lexeme)) + " " + string((yyvsp[-1].lexeme)) + string((yyvsp[0].lexeme));
      free((yyvsp[-3].lexeme)); free((yyvsp[-2].lexeme)); free((yyvsp[-1].lexeme));
      (yyval.lexeme) = strdup((char*) s.c_str());
      typeToStore = "";
    }
#line 1963 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 70:
#line 362 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].lexeme)) + " " + string((yyvsp[-1].lexeme)) + string((yyvsp[0].lexeme));
      free((yyvsp[-2].lexeme)); free((yyvsp[-1].lexeme));
      (yyval.lexeme) = strdup((char*) s.c_str());
      typeToStore = "";
    }
#line 1974 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 71:
#line 371 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 1980 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 72:
#line 372 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-1].lexeme)) + " " + string((yyvsp[0].lexeme));
      free((yyvsp[-1].lexeme)); free((yyvsp[0].lexeme));
      (yyval.lexeme) = strdup((char*) s.c_str());
    }
#line 1990 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 73:
#line 380 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 1996 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 74:
#line 381 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2002 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 75:
#line 385 "src/parser.y" /* yacc.c:1646  */
    {
      typeToStore = (yyvsp[0].lexeme);
      (yyval.lexeme) = strdup((yyvsp[0].lexeme));
    }
#line 2011 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 76:
#line 392 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2017 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 77:
#line 393 "src/parser.y" /* yacc.c:1646  */
    {(yyval.lexeme) = (char *) "qualified_name";}
#line 2023 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 78:
#line 397 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2029 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 79:
#line 398 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2035 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 80:
#line 399 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2041 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 81:
#line 400 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2047 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 82:
#line 401 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2053 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 83:
#line 402 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2059 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 90:
#line 421 "src/parser.y" /* yacc.c:1646  */
    {
      if(typesTable.contains((yyvsp[0].lexeme)) || env->get((yyvsp[0].lexeme)) != NULL) {
        nodeType no;
        no.type = (yyvsp[0].lexeme);
        no.lexeme = (yyvsp[0].lexeme);
        (yyval.node) = copyNode(&no);
      } else {
        yyerror("Identifier undeclared");
        YYERROR;
      }
    }
#line 2075 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 97:
#line 453 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2081 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 98:
#line 454 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].lexeme)) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].lexeme));
      free((yyvsp[-2].lexeme)); free((yyvsp[0].lexeme));
      (yyval.lexeme) = strdup((char*) s.c_str());
    }
#line 2091 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 99:
#line 462 "src/parser.y" /* yacc.c:1646  */
    {
      if(env->isValid(filterIDofArray((yyvsp[0].lexeme)))) {
        VariableEntry var(typeToStore);
        env->put(filterIDofArray((yyvsp[0].lexeme)), var);
      } else {
        yyerror("Identifier previously declared");
        YYERROR;
      }
      (yyval.lexeme) = strdup((yyvsp[0].lexeme));
    }
#line 2106 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 100:
#line 472 "src/parser.y" /* yacc.c:1646  */
    {
      if(env->isValid(filterIDofArray((yyvsp[-2].lexeme))) && isCompatible(ignorePointers(typeToStore), string((yyvsp[0].node)->type))) {
        VariableEntry var(typeToStore);
        env->put(filterIDofArray((yyvsp[-2].lexeme)), var);
      } else {
        yyerror("Identifier previously declared or invalid assignment");
        YYERROR;
      }
      string s = string((yyvsp[-2].lexeme)) + " " + string((yyvsp[-1].lexeme)) + " " + string((yyvsp[0].node)->lexeme);
      free((yyvsp[-2].lexeme));
      (yyval.lexeme) = strdup((char*) s.c_str());
    }
#line 2123 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 101:
#line 487 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2129 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 102:
#line 488 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-1].lexeme)) + string((yyvsp[0].lexeme));
      typeToStore += pointersOfAType((yyvsp[0].lexeme));
      (yyval.lexeme) = strdup((char*) s.c_str());
    }
#line 2139 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 103:
#line 496 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2145 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 104:
#line 497 "src/parser.y" /* yacc.c:1646  */
    {
      if(!isPointer(typeToStore)) {
        yyerror("Invalid initialization");
        YYERROR;
      }
      string s = string((yyvsp[-1].lexeme)) + string((yyvsp[0].lexeme));
      nodeType no;
      no.type = (char*) "empty";
      no.lexeme = (char*) s.c_str();
      (yyval.node) = copyNode(&no);
    }
#line 2161 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 105:
#line 508 "src/parser.y" /* yacc.c:1646  */
    {
      if(!isPointer(typeToStore)) {
        yyerror("Invalid initialization");
        YYERROR;
      }
      string s = string((yyvsp[-2].lexeme)) + string((yyvsp[-1].node)->lexeme) + string((yyvsp[0].lexeme));
      nodeType no;
      no.type = (char*) string((yyvsp[-1].node)->type).c_str();
      no.lexeme = (char*) s.c_str();
      (yyval.node) = copyNode(&no);
    }
#line 2177 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 106:
#line 522 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2183 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 107:
#line 523 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node)->lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.type = getType(string((yyvsp[-2].node)->type), string((yyvsp[0].node)->type));
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node)->type) + "\' to \'" + string((yyvsp[0].node)->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      }
      no.lexeme = (char*) s.c_str();
      (yyval.node) = copyNode(&no);
    }
#line 2200 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 108:
#line 538 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2206 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 109:
#line 542 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2212 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 110:
#line 543 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node)->lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node)->type, (yyvsp[0].node)->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node)->type) + "\' to \'" + string((yyvsp[0].node)->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = copyNode(&no);
      }
    }
#line 2230 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 111:
#line 559 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.type = (yyvsp[0].node)->type;
      no.lexeme = (char*) s.c_str();
      (yyval.node) = copyNode(&no);
    }
#line 2242 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 112:
#line 566 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2248 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 113:
#line 570 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2254 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 114:
#line 571 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.type = (yyvsp[0].node)->type;
      no.lexeme = (char*) s.c_str();
      (yyval.node) = copyNode(&no);
    }
#line 2266 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 115:
#line 581 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2272 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 116:
#line 585 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2278 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 117:
#line 586 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2284 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 118:
#line 590 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2290 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 119:
#line 591 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2296 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 120:
#line 595 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2302 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 121:
#line 596 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2308 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 122:
#line 600 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2314 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 124:
#line 602 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node)->lexeme) + "||" + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node)->type, (yyvsp[0].node)->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node)->type) + "\' to \'" + string((yyvsp[0].node)->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = copyNode(&no);
      }
    }
#line 2332 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 125:
#line 618 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2338 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 127:
#line 620 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node)->lexeme) + "&&" + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node)->type, (yyvsp[0].node)->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node)->type) + "\' to \'" + string((yyvsp[0].node)->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = copyNode(&no);
      }
    }
#line 2356 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 128:
#line 636 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2362 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 129:
#line 637 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node)->lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node)->type, (yyvsp[0].node)->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node)->type) + "\' to \'" + string((yyvsp[0].node)->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = copyNode(&no);
      }
    }
#line 2380 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 130:
#line 653 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2386 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 131:
#line 654 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node)->lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node)->type, (yyvsp[0].node)->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node)->type) + "\' to \'" + string((yyvsp[0].node)->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = copyNode(&no);
      }
    }
#line 2404 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 132:
#line 670 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2410 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 133:
#line 671 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node)->lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node)->type, (yyvsp[0].node)->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node)->type) + "\' to \'" + string((yyvsp[0].node)->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = copyNode(&no);
      }
    }
#line 2428 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 134:
#line 687 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2434 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 135:
#line 688 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node)->lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node)->type, (yyvsp[0].node)->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node)->type) + "\' to \'" + string((yyvsp[0].node)->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = copyNode(&no);
      }
    }
#line 2452 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 136:
#line 701 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node)->lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node)->type, (yyvsp[0].node)->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node)->type) + "\' to \'" + string((yyvsp[0].node)->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = copyNode(&no);
      }
    }
#line 2470 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 137:
#line 717 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2476 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 138:
#line 718 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node)->lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node)->type, (yyvsp[0].node)->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node)->type) + "\' to \'" + string((yyvsp[0].node)->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = copyNode(&no);
      }
    }
#line 2494 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 139:
#line 731 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node)->lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node)->type, (yyvsp[0].node)->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node)->type) + "\' to \'" + string((yyvsp[0].node)->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = copyNode(&no);
      }
    }
#line 2512 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 140:
#line 744 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node)->lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node)->type, (yyvsp[0].node)->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node)->type) + "\' to \'" + string((yyvsp[0].node)->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = copyNode(&no);
      }
    }
#line 2530 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 141:
#line 757 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node)->lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node)->type, (yyvsp[0].node)->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node)->type) + "\' to \'" + string((yyvsp[0].node)->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = copyNode(&no);
      }
    }
#line 2548 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 142:
#line 773 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2554 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 143:
#line 774 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node)->lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node)->type, (yyvsp[0].node)->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node)->type) + "\' to \'" + string((yyvsp[0].node)->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = copyNode(&no);
      }
    }
#line 2572 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 144:
#line 787 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node)->lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node)->type, (yyvsp[0].node)->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node)->type) + "\' to \'" + string((yyvsp[0].node)->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = copyNode(&no);
      }
    }
#line 2590 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 145:
#line 803 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2596 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 146:
#line 804 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node)->lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node)->type, (yyvsp[0].node)->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node)->type) + "\' to \'" + string((yyvsp[0].node)->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = copyNode(&no);
      }
    }
#line 2614 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 147:
#line 817 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node)->lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node)->type, (yyvsp[0].node)->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node)->type) + "\' to \'" + string((yyvsp[0].node)->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = copyNode(&no);
      }
    }
#line 2632 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 148:
#line 833 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2638 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 149:
#line 834 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node)->lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node)->type, (yyvsp[0].node)->type);
      if(no.type == NULL) {
        string msg = "invalid conversion from \'" + string((yyvsp[-2].node)->type) + "\' to \'" + string((yyvsp[0].node)->type) + "\'";
        yyerror(msg.c_str());
        YYERROR;
      } else {
        (yyval.node) = copyNode(&no);
      }
    }
#line 2656 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 150:
#line 847 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node)->lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node)->type, (yyvsp[0].node)->type);
      (yyval.node) = copyNode(&no);
    }
#line 2668 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 151:
#line 854 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].node)->lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = getType((yyvsp[-2].node)->type, (yyvsp[0].node)->type);
      (yyval.node) = copyNode(&no);
    }
#line 2680 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 152:
#line 864 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2686 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 153:
#line 865 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-3].lexeme)) + string((yyvsp[-2].lexeme)) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = (yyvsp[-2].lexeme);
      (yyval.node) = copyNode(&no);
    }
#line 2698 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 154:
#line 872 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-3].lexeme)) + string((yyvsp[-2].lexeme)) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = (yyvsp[-2].lexeme);
      (yyval.node) = copyNode(&no);
    }
#line 2710 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 155:
#line 879 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-3].lexeme)) + string((yyvsp[-2].node)->lexeme) + string((yyvsp[-1].lexeme)) + string((yyvsp[0].node)->lexeme);
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = (yyvsp[-2].node)->type;
      (yyval.node) = copyNode(&no);
    }
#line 2722 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 159:
#line 898 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2728 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 160:
#line 899 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2734 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 161:
#line 900 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2740 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 162:
#line 901 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2746 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 163:
#line 902 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2752 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 164:
#line 903 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2758 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 165:
#line 904 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2764 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 166:
#line 905 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2770 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 167:
#line 906 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2776 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 168:
#line 907 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2782 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 169:
#line 908 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2788 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 170:
#line 912 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2794 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 171:
#line 916 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-2].lexeme)) + string((yyvsp[-1].node)->lexeme) + string((yyvsp[0].lexeme));
      nodeType no;
      no.lexeme = (char*) s.c_str();
      no.type = (yyvsp[-1].node)->type;
      (yyval.node) = copyNode(&no);
    }
#line 2806 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 172:
#line 923 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2812 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 173:
#line 927 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2818 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 174:
#line 928 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2824 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 175:
#line 929 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2830 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 176:
#line 930 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2836 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 177:
#line 931 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2842 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 178:
#line 932 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2848 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 179:
#line 933 "src/parser.y" /* yacc.c:1646  */
    { (yyval.node) = copyNode((yyvsp[0].node)); }
#line 2854 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 185:
#line 945 "src/parser.y" /* yacc.c:1646  */
    {
      cout << "hahaha\n";
    }
#line 2862 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 192:
#line 966 "src/parser.y" /* yacc.c:1646  */
    { (yyval.lexeme) = strdup((yyvsp[0].lexeme)); }
#line 2868 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 193:
#line 967 "src/parser.y" /* yacc.c:1646  */
    {
      string s = string((yyvsp[-1].lexeme)) + string((yyvsp[0].lexeme));
      (yyval.lexeme) = strdup((char*) s.c_str());
    }
#line 2877 "src/parser.cpp" /* yacc.c:1646  */
    break;

  case 194:
#line 974 "src/parser.y" /* yacc.c:1646  */
    {
      if(strcmp((yyvsp[-1].node)->type, (char*) "int") != 0) {
        yyerror("size of array must be an integer");
        YYERROR;
      }
      string s = string((yyvsp[-2].lexeme)) + string((yyvsp[-1].node)->lexeme) + string((yyvsp[0].lexeme));
      (yyval.lexeme) = strdup((char*) s.c_str());
    }
#line 2890 "src/parser.cpp" /* yacc.c:1646  */
    break;


#line 2894 "src/parser.cpp" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 989 "src/parser.y" /* yacc.c:1906  */


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

void fileHeader() {
  out << "#include <cstdio>" << endl;
  out << "#include <cstdlib>" << endl;
  out << "#include <iostream>" << endl;
  out << "#include <string>" << endl;
  out << "using namespace std;" << endl << endl;
}
