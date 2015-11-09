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
#line 7 "parser.y" /* yacc.c:339  */

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

#line 86 "parser.cpp" /* yacc.c:339  */

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
#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    STRING_LITERAL = 259,
    DECIMAL = 260,
    HEX = 261,
    OCTAL = 262,
    FLOATING_POINT = 263,
    BOOL_LITERAL = 264,
    CHAR_LITERAL = 265,
    ASSIGN = 266,
    ASSIGN_PLUS = 267,
    ASSIGN_MINUS = 268,
    ASSIGN_PRODUCT = 269,
    ASSIGN_DIV = 270,
    ASSIGN_MOD = 271,
    ASSIGN_BITWISE_AND = 272,
    ASSIGN_BITWISE_OR = 273,
    ASSIGN_BITWISE_OR_EXC = 274,
    ASSIGN_L_SHIFT = 275,
    ASSIGN_R_SHIFT = 276,
    AMPERSAND = 277,
    AUTO = 278,
    BOOL = 279,
    BREAK = 280,
    BYTE = 281,
    BITWISE_COMPLEMENT = 282,
    BITWISE_OR = 283,
    BITWISE_OR_EXC = 284,
    CASE = 285,
    CHAR = 286,
    COMMA = 287,
    CONTINUE = 288,
    CONST = 289,
    DOT = 290,
    DOUBLE = 291,
    ENUM = 292,
    ELSE = 293,
    ELSIF = 294,
    END_CASE = 295,
    END_ENUM = 296,
    END_FOR = 297,
    END_FUNCTION = 298,
    END_IF = 299,
    END_PROCEDURE = 300,
    END_STRUCT = 301,
    END_UNION = 302,
    END_WHILE = 303,
    FLOAT = 304,
    FOR = 305,
    FUNCTION = 306,
    IF = 307,
    INT = 308,
    L_PAREN = 309,
    L_SQ_PAREN = 310,
    L_BRACE = 311,
    L_SHIFT = 312,
    LOG_NOT = 313,
    LOG_AND = 314,
    LOG_OR = 315,
    LOG_SC_AND = 316,
    LOG_SC_OR = 317,
    LONG = 318,
    NNULL = 319,
    OP_EQ = 320,
    OP_NE = 321,
    OP_PTR = 322,
    OP_PLUS = 323,
    OP_MINUS = 324,
    OP_ASTERISK = 325,
    OP_DIV = 326,
    OP_MOD = 327,
    OP_LET = 328,
    OP_LT = 329,
    OP_GET = 330,
    OP_GT = 331,
    PRINT = 332,
    PRINTLN = 333,
    PROCEDURE = 334,
    READ = 335,
    RETURN = 336,
    R_PAREN = 337,
    R_SQ_PAREN = 338,
    R_BRACE = 339,
    R_SHIFT = 340,
    SHORT = 341,
    STRING = 342,
    STRUCT = 343,
    STATIC = 344,
    SIZEOF = 345,
    SEMICOLON = 346,
    THEN = 347,
    TYPEOF = 348,
    UNION = 349,
    WHEN = 350,
    WHILE = 351
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 27 "parser.y" /* yacc.c:355  */

	int iValue; 	  /* integer value */
	char cValue;	  /* char value */
  char bValue;    /* bool value */
	char *sValue;	  /* string value */
  double fValue;  /* floating point value */

#line 231 "parser.cpp" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 246 "parser.cpp" /* yacc.c:358  */

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
#define YYFINAL  38
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   941

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  97
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  78
/* YYNRULES -- Number of rules.  */
#define YYNRULES  191
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  328

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   351

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
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    74,    74,    78,    82,    83,    87,    88,    89,    90,
      94,    98,   102,   103,   107,   108,   112,   113,   117,   118,
     122,   126,   127,   131,   132,   136,   137,   141,   142,   143,
     144,   148,   150,   151,   155,   156,   157,   161,   165,   166,
     167,   171,   172,   173,   177,   178,   182,   186,   187,   191,
     195,   196,   197,   198,   199,   200,   204,   205,   206,   210,
     211,   215,   216,   220,   221,   225,   226,   230,   234,   235,
     239,   240,   241,   242,   243,   244,   245,   246,   247,   251,
     252,   256,   257,   261,   262,   266,   280,   281,   285,   289,
     290,   294,   298,   299,   303,   304,   308,   309,   313,   314,
     315,   319,   320,   321,   325,   329,   330,   334,   335,   339,
     340,   344,   348,   349,   353,   354,   358,   359,   363,   364,
     365,   369,   370,   371,   375,   376,   380,   381,   385,   386,
     390,   391,   392,   396,   397,   398,   399,   400,   401,   405,
     406,   407,   411,   412,   413,   417,   418,   419,   420,   424,
     425,   426,   427,   431,   432,   436,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,   454,   458,   459,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     476,   477,   481,   482,   486,   487,   491,   492,   496,   497,
     501,   502
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "STRING_LITERAL",
  "DECIMAL", "HEX", "OCTAL", "FLOATING_POINT", "BOOL_LITERAL",
  "CHAR_LITERAL", "ASSIGN", "ASSIGN_PLUS", "ASSIGN_MINUS",
  "ASSIGN_PRODUCT", "ASSIGN_DIV", "ASSIGN_MOD", "ASSIGN_BITWISE_AND",
  "ASSIGN_BITWISE_OR", "ASSIGN_BITWISE_OR_EXC", "ASSIGN_L_SHIFT",
  "ASSIGN_R_SHIFT", "AMPERSAND", "AUTO", "BOOL", "BREAK", "BYTE",
  "BITWISE_COMPLEMENT", "BITWISE_OR", "BITWISE_OR_EXC", "CASE", "CHAR",
  "COMMA", "CONTINUE", "CONST", "DOT", "DOUBLE", "ENUM", "ELSE", "ELSIF",
  "END_CASE", "END_ENUM", "END_FOR", "END_FUNCTION", "END_IF",
  "END_PROCEDURE", "END_STRUCT", "END_UNION", "END_WHILE", "FLOAT", "FOR",
  "FUNCTION", "IF", "INT", "L_PAREN", "L_SQ_PAREN", "L_BRACE", "L_SHIFT",
  "LOG_NOT", "LOG_AND", "LOG_OR", "LOG_SC_AND", "LOG_SC_OR", "LONG",
  "NNULL", "OP_EQ", "OP_NE", "OP_PTR", "OP_PLUS", "OP_MINUS",
  "OP_ASTERISK", "OP_DIV", "OP_MOD", "OP_LET", "OP_LT", "OP_GET", "OP_GT",
  "PRINT", "PRINTLN", "PROCEDURE", "READ", "RETURN", "R_PAREN",
  "R_SQ_PAREN", "R_BRACE", "R_SHIFT", "SHORT", "STRING", "STRUCT",
  "STATIC", "SIZEOF", "SEMICOLON", "THEN", "TYPEOF", "UNION", "WHEN",
  "WHILE", "$accept", "translation_unit", "program_file", "declarations",
  "declaration", "function_declaration", "procedure_declaration",
  "subprogram_declarator", "parameter_list", "parameter",
  "subprogram_body", "block", "local_variable_declarations_and_statements",
  "local_variable_declarations_or_statements",
  "local_variable_declaration_statement", "statement",
  "selection_statement", "elsif_staments", "elsif_stament",
  "iteration_statement", "for_init", "for_expr", "for_incr",
  "expression_statements", "expression_statement", "jump_statement",
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
  "subprogram_call", "subprogram_access", "argument_list", "dims", YY_NULLPTR
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
     345,   346,   347,   348,   349,   350,   351
};
# endif

#define YYPACT_NINF -186

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-186)))

#define YYTABLE_NINF -188

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     139,  -186,  -186,  -186,  -186,  -186,  -186,    34,  -186,   696,
    -186,  -186,    45,  -186,  -186,    58,  -186,    77,    89,  -186,
     139,  -186,  -186,  -186,  -186,  -186,   567,  -186,    92,  -186,
    -186,  -186,    97,    45,    38,   348,   567,    48,  -186,  -186,
    -186,    92,  -186,   -17,  -186,    30,    95,     1,  -186,   348,
     655,  -186,  -186,  -186,  -186,  -186,  -186,     3,  -186,     8,
      54,    69,   619,  -186,  -186,  -186,  -186,   208,   696,  -186,
      79,    96,  -186,   418,  -186,  -186,  -186,  -186,  -186,  -186,
      92,    29,    59,   347,  -186,   117,  -186,   865,   872,   -16,
      32,   129,   132,   142,    -2,    43,   -38,    36,   -19,  -186,
     130,   111,   114,  -186,  -186,  -186,   115,   233,  -186,   696,
     567,   -15,    92,  -186,   856,   865,   865,    97,  -186,   128,
     696,  -186,    -3,  -186,    92,    81,  -186,    83,  -186,   485,
     865,   123,    12,    98,  -186,   100,   101,  -186,    67,    88,
      92,   865,  -186,  -186,   -14,   865,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,  -186,   865,   181,
    -186,  -186,   865,  -186,   865,   865,   865,   865,   865,   865,
     865,   865,   865,   865,   865,   865,   865,   696,   865,   865,
     865,   865,   865,   865,   865,   182,   865,   772,  -186,  -186,
      92,   532,   146,  -186,  -186,   747,  -186,  -186,   103,  -186,
    -186,  -186,    92,   661,  -186,   134,  -186,  -186,  -186,  -186,
     519,   -10,  -186,  -186,   105,   116,   145,   759,   145,   140,
     865,   865,  -186,    -4,   119,  -186,   122,  -186,  -186,   124,
      32,    32,   129,   129,   132,   142,    -2,    43,    43,   -38,
     -38,   -38,   -38,  -186,    36,    36,   -19,   -19,  -186,  -186,
    -186,  -186,   136,  -186,  -186,     6,   -24,   194,  -186,  -186,
    -186,  -186,    -9,  -186,   134,  -186,  -186,   840,   131,   865,
    -186,   418,  -186,   137,  -186,  -186,  -186,  -186,   418,  -186,
    -186,  -186,   865,  -186,  -186,   126,   856,  -186,   418,   147,
     192,  -186,  -186,    21,  -186,   183,  -186,   227,   -26,  -186,
    -186,   190,   418,   418,   -11,  -186,  -186,   148,  -186,  -186,
    -186,   195,   197,   418,   865,    -5,  -186,   567,  -186,  -186,
    -186,   152,   184,  -186,   567,   418,  -186,  -186
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    85,    70,    71,    72,    65,    73,     0,    74,     0,
      75,    76,     0,    77,    78,     0,    66,     0,     0,     2,
       3,     4,     6,     7,     8,     9,     0,    63,     0,    67,
      68,    69,     0,     0,     0,     0,     0,    80,     1,     5,
      64,     0,    96,     0,    92,    94,    84,     0,    81,     0,
       0,   176,   172,   173,   171,   174,   170,     0,   116,     0,
       0,     0,     0,   117,   175,   114,   115,     0,     0,    19,
       0,     0,    18,    20,    21,    23,    24,    28,    29,    30,
       0,   112,     0,   149,   108,   109,   111,     0,     0,   105,
     118,   121,   124,   126,   128,   130,   133,   139,   142,   145,
     113,   167,   169,   177,   178,   179,     0,     0,    59,     0,
       0,     0,     0,    62,     0,     0,     0,     0,    58,     0,
       0,    13,     0,    14,     0,     0,    51,     0,    53,     0,
       0,   153,   112,     0,   104,     0,     0,    55,   112,     0,
       0,     0,    11,    22,     0,     0,    27,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,     0,     0,
     149,   107,     0,   110,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    56,    60,
       0,    87,     0,    61,    93,     0,    95,    98,     0,    83,
      82,    10,     0,     0,    12,    16,    50,    52,    43,    42,
       0,     0,    47,    49,     0,     0,   154,     0,   155,   168,
       0,     0,    54,     0,     0,    25,     0,   106,   183,     0,
     119,   120,   122,   123,   125,   127,   129,   131,   132,   136,
     134,   137,   135,   138,   140,   141,   143,   144,   146,   147,
     148,   182,     0,   185,   188,     0,     0,     0,    86,    57,
      99,   101,     0,    97,    17,    15,    45,     0,     0,     0,
      41,     0,   190,     0,   152,   150,   151,    26,     0,   180,
     168,   181,     0,   184,    79,     0,   103,   100,     0,     0,
      46,    44,    48,     0,   191,     0,   189,     0,     0,    89,
     102,     0,     0,     0,     0,    33,    38,     0,    88,    90,
      40,     0,     0,     0,     0,     0,    34,     0,    39,    32,
      36,     0,     0,    31,    91,     0,    35,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -186,  -186,  -186,  -186,   219,  -186,  -186,   209,  -186,    41,
     196,     2,  -186,   173,   118,  -186,  -186,  -186,   -74,  -186,
    -186,  -186,  -186,    -8,   -20,  -186,  -186,  -108,     5,  -186,
     225,     4,  -186,   199,  -186,  -186,   135,     0,  -186,  -186,
    -186,   -40,   -25,   151,  -112,  -185,  -186,   -59,   -28,   166,
      46,  -186,  -186,  -186,  -186,  -186,   -39,   -35,   102,    99,
     113,   -18,   -36,   -23,   -21,   -86,  -186,  -186,  -186,  -186,
    -186,  -186,  -186,  -186,  -186,  -186,  -186,   149
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    22,    23,    35,   122,   123,
      71,    72,    73,    74,    75,    76,    77,   315,   316,    78,
     210,   267,   289,   211,   212,    79,    24,   107,   108,    26,
      27,    80,    29,    30,   110,    47,    48,   138,   192,   258,
     298,   299,    43,    44,    45,   196,   262,   197,   134,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   135,   136,   158,   100,
     101,   102,   103,   104,   105,   106,   255,   216
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,   161,   191,   133,    28,    25,   125,    82,   139,    31,
     261,   127,   205,    33,   308,   112,   111,   112,   112,   178,
      31,    82,   269,   286,    28,    25,    31,   313,   112,   203,
      41,   115,   -69,   117,   322,    81,    31,    32,   282,   323,
      28,   114,   118,   314,   164,    82,   165,   179,    34,    81,
      31,   182,   183,   184,   124,   144,   198,   199,   284,   303,
     304,    36,   132,   171,   172,   305,  -187,   217,    31,   297,
     213,   214,   140,    81,   113,   287,   193,   225,   256,   204,
      37,   270,   224,  -187,   145,   115,   226,   277,   283,    38,
     264,   166,    50,   167,   126,    42,   248,   249,   250,   128,
      46,   300,   109,   229,   180,   181,   116,    31,   129,    31,
      31,    28,   189,   190,    28,   223,   173,   174,   175,   176,
      31,  -187,   145,   130,   202,   230,   231,   252,   254,    81,
     227,   232,   233,   141,   275,   276,   177,   239,   240,   241,
     242,   142,     1,     1,    51,    52,    53,    54,    55,    56,
     146,   268,   159,   237,   238,   244,   245,   168,   226,   246,
     247,   169,     2,     3,   170,   185,   186,    58,  -186,   187,
       4,   201,   206,     5,   207,     6,     7,    31,   215,   222,
     219,   243,   220,   221,   228,   251,   263,   271,     8,   115,
       9,    31,    10,   259,   162,    28,   189,   285,    63,   272,
     273,   278,    11,    31,    64,   279,   280,   124,   213,   324,
     213,     1,    51,    52,    53,    54,    55,    56,    12,   281,
     294,   297,   291,   296,   269,    13,    14,    15,    16,   302,
     307,   306,   310,    17,   325,    58,     1,   318,   314,    39,
     317,   319,    49,    82,   265,   119,   143,   209,   326,   292,
      82,    40,   200,   160,   163,   321,     2,     3,   309,   290,
      82,   131,    62,   194,     4,   274,    63,     5,   235,     6,
     234,    81,    64,   293,    82,    82,    65,    66,    81,   188,
     295,   218,     8,   236,     0,    82,    10,     0,    81,     0,
     301,     0,     0,     0,     0,     0,    11,    82,     0,   137,
       0,     0,    81,    81,   311,   312,     0,     0,     0,     0,
       0,     0,     0,    81,     0,   320,     0,    31,     0,    13,
      14,    28,    16,     0,    31,    81,     0,   327,    28,   189,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   160,     0,   160,   160,   160,   160,   160,   160,
     160,     1,    51,    52,    53,    54,    55,    56,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,     0,
       0,     2,     3,    57,     0,    58,     0,     0,     0,     4,
       0,    59,     0,     0,     6,     0,   160,   160,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     8,    60,     0,
      61,    10,    62,     0,     0,     0,    63,     0,     0,     0,
       0,    11,    64,     0,     0,     0,    65,    66,     0,     0,
       0,     1,    51,    52,    53,    54,    55,    56,     0,    67,
       0,     0,     0,     0,    13,    14,     0,    68,     0,    69,
       0,     2,     3,    57,    70,    58,     0,     0,     0,     4,
       0,    59,     0,     0,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     8,    60,     0,
      61,    10,    62,     0,     0,     0,    63,     0,     0,     0,
       0,    11,    64,     0,     0,     0,    65,    66,     1,    51,
      52,    53,    54,    55,    56,     0,     0,     0,     0,    67,
       0,     0,     0,     0,    13,    14,     0,    68,     2,     3,
       0,     0,    58,     0,    70,     0,     4,     0,     0,     0,
       0,     6,     1,    51,    52,    53,    54,    55,    56,     0,
       0,     0,     0,     0,     8,     1,     0,     0,    10,    62,
       0,     0,     0,    63,     0,     0,    58,     0,    11,    64,
       0,     0,     0,    65,    66,     2,     3,     0,     0,     0,
       0,     0,   257,     4,     0,     0,     5,     0,     6,     0,
       1,    13,    14,    62,    68,     0,   208,    63,     0,     0,
       0,     8,     0,    64,     0,    10,     0,    65,    66,     0,
       2,     3,     0,     0,     0,    11,     0,     0,     4,     0,
       0,     5,     0,     6,     0,     0,     0,     0,     0,     0,
     266,     0,     0,     0,     0,     0,     8,     0,    13,    14,
      10,    16,     1,    51,    52,    53,    54,    55,    56,     0,
      11,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     3,     0,     0,    58,     0,     0,     0,
       4,     0,     0,    13,    14,     6,    16,     0,     1,     0,
       0,     0,     0,     0,     1,     0,     0,     0,     8,     0,
       0,     0,    10,    62,     0,     0,     0,    63,     2,     3,
       0,     0,    11,    64,     2,     3,     4,    65,    66,   120,
       0,     6,     4,     0,     0,   120,     0,     6,     0,     1,
       0,     0,     0,     0,     8,    13,    14,     0,    10,     0,
       8,     0,     0,     0,    10,     0,     0,     0,    11,     2,
       3,     0,     0,     0,    11,     0,     0,     4,     0,     0,
       0,     0,     6,     0,     0,     0,     0,   121,     0,     0,
       0,    13,    14,     0,     0,     8,     0,    13,    14,    10,
       1,    51,    52,    53,    54,    55,    56,     0,     0,    11,
       0,     0,     1,    51,    52,    53,    54,    55,    56,     0,
       0,     0,     0,     0,    58,     1,    51,    52,    53,    54,
      55,    56,    13,    14,     0,     0,    58,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,    62,     0,   195,     0,    63,     0,     0,     0,     0,
       0,    64,     0,    62,     0,    65,    66,    63,     0,     0,
       0,     0,     0,    64,     0,     0,    62,    65,    66,     0,
      63,   260,     0,     0,     0,     0,    64,     0,     0,     0,
      65,    66,   272,     1,    51,    52,    53,    54,    55,    56,
       0,     0,     0,     0,   253,     0,     0,     0,     0,     1,
      51,    52,    53,    54,    55,    56,     0,    58,     1,    51,
      52,    53,    54,    55,    56,     1,    51,    52,    53,    54,
      55,    56,     0,    58,     0,     0,     0,     0,     0,     0,
       0,     0,    58,     0,    62,     0,     0,     0,    63,    58,
       0,     0,     0,     0,    64,     0,     0,     0,    65,    66,
      62,     0,   195,     0,    63,     0,     0,     0,     0,    62,
      64,     0,   288,    63,    65,    66,   162,     0,     0,    64,
      63,     0,     0,    65,    66,     0,    64,     0,     0,     0,
      65,    66
};

static const yytype_int16 yycheck[] =
{
       0,    87,   110,    62,     0,     0,     3,    35,    67,     9,
     195,     3,   124,     9,    40,    32,    41,    32,    32,    57,
      20,    49,    32,    32,    20,    20,    26,    38,    32,    32,
      26,    55,     3,    32,    39,    35,    36,     3,    32,    44,
      36,    11,    41,    54,    60,    73,    62,    85,     3,    49,
      50,    70,    71,    72,    50,    80,   115,   116,    82,    38,
      39,     3,    62,    65,    66,    44,    54,    55,    68,    95,
     129,   130,    68,    73,    91,    84,    91,    91,   190,    82,
       3,    91,   141,    54,    55,    55,   145,    91,    82,     0,
     202,    59,    54,    61,    91,     3,   182,   183,   184,    91,
       3,   286,    54,   162,    68,    69,    11,   107,    54,   109,
     110,   107,   107,   109,   110,   140,    73,    74,    75,    76,
     120,    54,    55,    54,   120,   164,   165,   186,   187,   129,
     158,   166,   167,    54,   220,   221,    93,   173,   174,   175,
     176,    45,     3,     3,     4,     5,     6,     7,     8,     9,
      91,   210,    35,   171,   172,   178,   179,    28,   217,   180,
     181,    29,    23,    24,    22,    35,    55,    27,    54,    54,
      31,    43,    91,    34,    91,    36,    37,   177,    55,    91,
      82,   177,    82,    82,     3,     3,    83,    82,    49,    55,
      51,   191,    53,    47,    54,   191,   191,     3,    58,    83,
      55,    82,    63,   203,    64,    83,    82,   203,   267,   317,
     269,     3,     4,     5,     6,     7,     8,     9,    79,    83,
      83,    95,    91,   282,    32,    86,    87,    88,    89,    82,
       3,    48,    42,    94,    82,    27,     3,    42,    54,    20,
      92,    44,    33,   271,   203,    49,    73,   129,   322,   269,
     278,    26,   117,    87,    88,   314,    23,    24,   298,   267,
     288,    62,    54,   112,    31,   219,    58,    34,   169,    36,
     168,   271,    64,   271,   302,   303,    68,    69,   278,    46,
     278,   132,    49,   170,    -1,   313,    53,    -1,   288,    -1,
     288,    -1,    -1,    -1,    -1,    -1,    63,   325,    -1,    91,
      -1,    -1,   302,   303,   302,   303,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   313,    -1,   313,    -1,   317,    -1,    86,
      87,   317,    89,    -1,   324,   325,    -1,   325,   324,   324,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,    -1,   178,   179,   180,   181,   182,   183,
     184,     3,     4,     5,     6,     7,     8,     9,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    -1,
      -1,    23,    24,    25,    -1,    27,    -1,    -1,    -1,    31,
      -1,    33,    -1,    -1,    36,    -1,   220,   221,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      52,    53,    54,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,    -1,    68,    69,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    -1,    89,    -1,    91,
      -1,    23,    24,    25,    96,    27,    -1,    -1,    -1,    31,
      -1,    33,    -1,    -1,    36,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,
      52,    53,    54,    -1,    -1,    -1,    58,    -1,    -1,    -1,
      -1,    63,    64,    -1,    -1,    -1,    68,    69,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    81,
      -1,    -1,    -1,    -1,    86,    87,    -1,    89,    23,    24,
      -1,    -1,    27,    -1,    96,    -1,    31,    -1,    -1,    -1,
      -1,    36,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    49,     3,    -1,    -1,    53,    54,
      -1,    -1,    -1,    58,    -1,    -1,    27,    -1,    63,    64,
      -1,    -1,    -1,    68,    69,    23,    24,    -1,    -1,    -1,
      -1,    -1,    30,    31,    -1,    -1,    34,    -1,    36,    -1,
       3,    86,    87,    54,    89,    -1,    91,    58,    -1,    -1,
      -1,    49,    -1,    64,    -1,    53,    -1,    68,    69,    -1,
      23,    24,    -1,    -1,    -1,    63,    -1,    -1,    31,    -1,
      -1,    34,    -1,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    -1,    -1,    -1,    49,    -1,    86,    87,
      53,    89,     3,     4,     5,     6,     7,     8,     9,    -1,
      63,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    -1,    -1,    27,    -1,    -1,    -1,
      31,    -1,    -1,    86,    87,    36,    89,    -1,     3,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    53,    54,    -1,    -1,    -1,    58,    23,    24,
      -1,    -1,    63,    64,    23,    24,    31,    68,    69,    34,
      -1,    36,    31,    -1,    -1,    34,    -1,    36,    -1,     3,
      -1,    -1,    -1,    -1,    49,    86,    87,    -1,    53,    -1,
      49,    -1,    -1,    -1,    53,    -1,    -1,    -1,    63,    23,
      24,    -1,    -1,    -1,    63,    -1,    -1,    31,    -1,    -1,
      -1,    -1,    36,    -1,    -1,    -1,    -1,    82,    -1,    -1,
      -1,    86,    87,    -1,    -1,    49,    -1,    86,    87,    53,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    63,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    27,     3,     4,     5,     6,     7,
       8,     9,    86,    87,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    27,
      -1,    54,    -1,    56,    -1,    58,    -1,    -1,    -1,    -1,
      -1,    64,    -1,    54,    -1,    68,    69,    58,    -1,    -1,
      -1,    -1,    -1,    64,    -1,    -1,    54,    68,    69,    -1,
      58,    84,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,
      68,    69,    83,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    82,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    27,     3,     4,
       5,     6,     7,     8,     9,     3,     4,     5,     6,     7,
       8,     9,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    27,    -1,    54,    -1,    -1,    -1,    58,    27,
      -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    68,    69,
      54,    -1,    56,    -1,    58,    -1,    -1,    -1,    -1,    54,
      64,    -1,    82,    58,    68,    69,    54,    -1,    -1,    64,
      58,    -1,    -1,    68,    69,    -1,    64,    -1,    -1,    -1,
      68,    69
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    23,    24,    31,    34,    36,    37,    49,    51,
      53,    63,    79,    86,    87,    88,    89,    94,    98,    99,
     100,   101,   102,   103,   123,   125,   126,   127,   128,   129,
     130,   134,     3,   128,     3,   104,     3,     3,     0,   101,
     127,   128,     3,   139,   140,   141,     3,   132,   133,   104,
      54,     4,     5,     6,     7,     8,     9,    25,    27,    33,
      50,    52,    54,    58,    64,    68,    69,    81,    89,    91,
      96,   107,   108,   109,   110,   111,   112,   113,   116,   122,
     128,   134,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     166,   167,   168,   169,   170,   171,   172,   124,   125,    54,
     131,   139,    32,    91,    11,    55,    11,    32,    41,   107,
      34,    82,   105,   106,   128,     3,    91,     3,    91,    54,
      54,   130,   134,   144,   145,   163,   164,    91,   134,   144,
     128,    54,    45,   110,   139,    55,    91,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,   165,    35,
     146,   162,    54,   146,    60,    62,    59,    61,    28,    29,
      22,    65,    66,    73,    74,    75,    76,    93,    57,    85,
      68,    69,    70,    71,    72,    35,    55,    54,    46,   125,
     128,   124,   135,    91,   140,    56,   142,   144,   144,   144,
     133,    43,   128,    32,    82,   141,    91,    91,    91,   111,
     117,   120,   121,   144,   144,    55,   174,    55,   174,    82,
      82,    82,    91,   139,   144,    91,   144,   145,     3,   144,
     153,   153,   154,   154,   155,   156,   157,   158,   158,   159,
     159,   159,   159,   128,   160,   160,   161,   161,   162,   162,
     162,     3,   144,    82,   144,   173,   141,    30,   136,    47,
      84,   142,   143,    83,   141,   106,    91,   118,   144,    32,
      91,    82,    83,    55,   147,   162,   162,    91,    82,    83,
      82,    83,    32,    82,    82,     3,    32,    84,    82,   119,
     120,    91,   121,   108,    83,   108,   144,    95,   137,   138,
     142,   108,    82,    38,    39,    44,    48,     3,    40,   138,
      42,   108,   108,    38,    54,   114,   115,    92,    42,    44,
     108,   144,    39,    44,   124,    82,   115,   108
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    97,    98,    99,   100,   100,   101,   101,   101,   101,
     102,   103,   104,   104,   105,   105,   106,   106,   107,   107,
     108,   109,   109,   110,   110,   111,   111,   112,   112,   112,
     112,   113,   113,   113,   114,   114,   114,   115,   116,   116,
     116,   117,   117,   117,   118,   118,   119,   120,   120,   121,
     122,   122,   122,   122,   122,   122,   123,   123,   123,   124,
     124,   125,   125,   126,   126,   127,   127,   128,   129,   129,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   131,
     131,   132,   132,   133,   133,   134,   135,   135,   136,   137,
     137,   138,   139,   139,   140,   140,   141,   141,   142,   142,
     142,   143,   143,   143,   144,   145,   145,   146,   146,   147,
     147,   148,   149,   149,   150,   150,   151,   151,   152,   152,
     152,   153,   153,   153,   154,   154,   155,   155,   156,   156,
     157,   157,   157,   158,   158,   158,   158,   158,   158,   159,
     159,   159,   160,   160,   160,   161,   161,   161,   161,   162,
     162,   162,   162,   163,   163,   164,   165,   165,   165,   165,
     165,   165,   165,   165,   165,   165,   165,   166,   167,   167,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     169,   169,   170,   170,   171,   171,   172,   172,   173,   173,
     174,   174
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     1,     1,     1,
       5,     4,     4,     3,     1,     3,     2,     3,     1,     1,
       1,     1,     2,     1,     1,     3,     4,     2,     1,     1,
       1,     8,     8,     6,     1,     3,     2,     4,     6,     8,
       7,     2,     1,     1,     2,     1,     1,     1,     3,     1,
       3,     2,     3,     2,     3,     2,     4,     5,     4,     1,
       2,     4,     3,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     4,
       0,     1,     3,     3,     1,     1,     2,     1,     4,     1,
       2,     4,     1,     3,     1,     3,     1,     4,     1,     2,
       3,     1,     3,     2,     1,     1,     3,     2,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     3,     1,     3,     3,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     1,
       4,     4,     4,     1,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       4,     4,     3,     3,     4,     3,     1,     1,     1,     3,
       2,     3
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
        case 28:
#line 142 "parser.y" /* yacc.c:1646  */
    {cout << "selection_statement\n";}
#line 1726 "parser.cpp" /* yacc.c:1646  */
    break;


#line 1730 "parser.cpp" /* yacc.c:1646  */
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
#line 506 "parser.y" /* yacc.c:1906  */


void yyerror(const char *s) {
	fprintf(stderr, "Error: %s at '%s' at line %i.\n", s, yytext, yylineno);
}
