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
//#include "SymbolTable.hpp"
//#include "PrimitiveTypeEntry.hpp"

using namespace std;

extern char *yytext;
extern int yylineno;

extern "C" {
  int yyparse(void);

  int yylex(void);

  void yyerror(const char *s);
}

//SymbolTable *env = new SymbolTable(NULL);

#line 90 "parser.tab.c" /* yacc.c:339  */

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
   by #include "parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
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
    BITWISE_COMPLEMENT = 281,
    BITWISE_OR = 282,
    BITWISE_OR_EXC = 283,
    CASE = 284,
    CHAR = 285,
    COMMA = 286,
    CONTINUE = 287,
    CONST = 288,
    DOT = 289,
    DOUBLE = 290,
    ENUM = 291,
    ELSE = 292,
    ELSIF = 293,
    END_CASE = 294,
    END_ENUM = 295,
    END_FOR = 296,
    END_FUNCTION = 297,
    END_IF = 298,
    END_PROCEDURE = 299,
    END_STRUCT = 300,
    END_UNION = 301,
    END_WHILE = 302,
    FLOAT = 303,
    FOR = 304,
    FUNCTION = 305,
    IF = 306,
    INT = 307,
    L_PAREN = 308,
    L_SQ_PAREN = 309,
    L_BRACE = 310,
    L_SHIFT = 311,
    LOG_NOT = 312,
    LOG_AND = 313,
    LOG_OR = 314,
    LOG_SC_AND = 315,
    LOG_SC_OR = 316,
    LONG = 317,
    NNULL = 318,
    OP_EQ = 319,
    OP_NE = 320,
    OP_PTR = 321,
    OP_PLUS = 322,
    OP_MINUS = 323,
    OP_ASTERISK = 324,
    OP_DIV = 325,
    OP_MOD = 326,
    OP_LET = 327,
    OP_LT = 328,
    OP_GET = 329,
    OP_GT = 330,
    PRINT = 331,
    PRINTLN = 332,
    PROCEDURE = 333,
    READ = 334,
    RETURN = 335,
    R_PAREN = 336,
    R_SQ_PAREN = 337,
    R_BRACE = 338,
    R_SHIFT = 339,
    SHORT = 340,
    STRING = 341,
    STRUCT = 342,
    STATIC = 343,
    SIZEOF = 344,
    SEMICOLON = 345,
    THEN = 346,
    TYPEOF = 347,
    UNION = 348,
    WHEN = 349,
    WHILE = 350
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 31 "parser.y" /* yacc.c:355  */

	int iValue; 	  /* integer value */
	char cValue;	  /* char value */
  char bValue;    /* bool value */
	char *sValue;	  /* string value */
  double fValue;  /* floating point value */

#line 234 "parser.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 249 "parser.tab.c" /* yacc.c:358  */

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
#define YYLAST   993

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  81
/* YYNRULES -- Number of rules.  */
#define YYNRULES  198
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  349

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   350

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
      95
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    78,    78,    82,    86,    87,    91,    92,    93,    94,
      98,   102,   106,   107,   111,   112,   116,   117,   121,   122,
     126,   130,   131,   135,   136,   140,   141,   145,   146,   147,
     148,   149,   150,   151,   155,   156,   157,   161,   162,   163,
     167,   171,   172,   173,   177,   178,   179,   183,   184,   188,
     192,   193,   197,   201,   202,   203,   204,   205,   206,   210,
     211,   215,   219,   223,   224,   225,   229,   230,   234,   235,
     239,   240,   244,   245,   249,   253,   254,   258,   259,   260,
     261,   262,   263,   264,   265,   266,   270,   271,   275,   276,
     280,   281,   285,   289,   290,   294,   298,   299,   303,   307,
     308,   312,   313,   317,   318,   322,   323,   324,   328,   329,
     330,   334,   338,   339,   343,   344,   348,   349,   353,   357,
     358,   362,   363,   367,   368,   372,   373,   374,   378,   379,
     380,   384,   385,   389,   390,   394,   395,   399,   400,   401,
     405,   406,   407,   408,   409,   410,   414,   415,   416,   420,
     421,   422,   426,   427,   428,   429,   433,   434,   435,   436,
     440,   441,   445,   449,   450,   451,   452,   453,   454,   455,
     456,   457,   458,   459,   463,   467,   468,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   486,   487,
     491,   495,   496,   500,   501,   505,   506,   510,   511
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
  "ASSIGN_R_SHIFT", "AMPERSAND", "AUTO", "BOOL", "BREAK",
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
     345,   346,   347,   348,   349,   350
};
# endif

#define YYPACT_NINF -265

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-265)))

#define YYTABLE_NINF -195

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     222,  -265,  -265,  -265,  -265,  -265,  -265,    38,  -265,    78,
    -265,  -265,    44,  -265,  -265,    49,  -265,    61,    34,  -265,
     222,  -265,  -265,  -265,  -265,  -265,   622,  -265,    65,  -265,
    -265,  -265,    72,    44,    40,   348,   622,    47,  -265,  -265,
    -265,    65,  -265,   -20,  -265,    31,   121,     6,  -265,   348,
     690,  -265,  -265,  -265,  -265,  -265,  -265,  -265,     7,  -265,
       9,    84,   101,   692,  -265,  -265,  -265,  -265,   115,   124,
     136,   175,    78,  -265,   155,   167,  -265,   441,  -265,  -265,
    -265,  -265,  -265,  -265,  -265,  -265,  -265,    65,    20,   125,
     535,  -265,   183,  -265,   891,   925,    74,   128,   191,   192,
     197,    25,    98,   -25,    42,   105,  -265,  -265,   168,   173,
    -265,  -265,  -265,   174,   565,  -265,    78,   622,   -12,    65,
    -265,   859,   891,   891,    72,  -265,   187,    78,  -265,   -10,
    -265,    65,   140,  -265,   141,  -265,   534,   891,   180,    75,
     154,  -265,   156,   158,   891,   891,   232,  -265,   139,   151,
      65,   891,  -265,  -265,    -4,   891,  -265,  -265,  -265,  -265,
    -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,   891,   241,
    -265,  -265,   891,  -265,   891,   891,   891,   891,   891,   891,
     891,   891,   891,   891,   891,   891,   891,    78,   891,   891,
     891,   891,   891,   891,   891,   891,   793,  -265,  -265,    65,
     606,   201,  -265,  -265,   727,  -265,  -265,   169,  -265,  -265,
    -265,    65,   439,  -265,   195,  -265,  -265,  -265,  -265,   322,
       1,  -265,  -265,   172,   178,   196,   759,   196,   356,   891,
     891,   181,   182,    14,  -265,     2,   185,  -265,   179,  -265,
    -265,   186,   128,   128,   191,   191,   192,   197,    25,    98,
      98,   -25,   -25,   -25,   -25,  -265,    42,    42,   105,   105,
    -265,  -265,  -265,   189,  -265,  -265,    22,   -37,   251,  -265,
    -265,  -265,  -265,   -23,  -265,   195,  -265,  -265,   825,   166,
     891,  -265,   441,  -265,   193,  -265,  -265,  -265,   188,   190,
     891,   199,  -265,   441,  -265,  -265,  -265,   891,  -265,  -265,
     170,   859,  -265,   441,   198,   237,  -265,  -265,    69,  -265,
    -265,  -265,    24,  -265,   226,  -265,   273,   -11,  -265,  -265,
     240,   441,   441,   -15,  -265,   200,  -265,   194,  -265,  -265,
    -265,   242,   243,   441,   891,    13,  -265,  -265,   622,  -265,
    -265,  -265,   210,   239,  -265,   622,   441,  -265,  -265
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    92,    77,    78,    79,    72,    80,     0,    81,     0,
      82,    83,     0,    84,    85,     0,    73,     0,     0,     2,
       3,     4,     6,     7,     8,     9,     0,    70,     0,    74,
      75,    76,     0,     0,     0,     0,     0,    87,     1,     5,
      71,     0,   103,     0,    99,   101,    91,     0,    88,     0,
       0,   183,   179,   180,   178,   181,   177,   184,     0,   123,
       0,     0,     0,     0,   124,   182,   121,   122,     0,     0,
       0,     0,     0,    19,     0,     0,    18,    20,    21,    23,
      24,    28,    29,    30,    31,    32,    33,     0,   119,     0,
     156,   115,   116,   118,     0,     0,   112,   125,   128,   131,
     133,   135,   137,   140,   146,   149,   152,   120,   174,   176,
     185,   186,   187,     0,     0,    66,     0,     0,     0,     0,
      69,     0,     0,     0,     0,    65,     0,     0,    13,     0,
      14,     0,     0,    54,     0,    56,     0,     0,   160,   119,
       0,   111,     0,     0,     0,     0,     0,    58,   119,     0,
       0,     0,    11,    22,     0,     0,    27,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,     0,     0,
     156,   114,     0,   117,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    63,    67,     0,
      94,     0,    68,   100,     0,   102,   105,     0,    90,    89,
      10,     0,     0,    12,    16,    53,    55,    46,    45,     0,
       0,    50,    52,     0,     0,   161,     0,   162,   175,     0,
       0,     0,     0,     0,    57,     0,     0,    25,     0,   113,
     190,     0,   126,   127,   129,   130,   132,   134,   136,   138,
     139,   143,   141,   144,   142,   145,   147,   148,   150,   151,
     153,   154,   155,     0,   192,   195,     0,     0,     0,    93,
      64,   106,   108,     0,   104,    17,    15,    48,     0,     0,
       0,    44,     0,   197,     0,   159,   157,   158,     0,     0,
       0,     0,    26,     0,   188,   175,   189,     0,   191,    86,
       0,   110,   107,     0,     0,    49,    47,    51,     0,   198,
      61,    62,     0,    60,     0,   196,     0,     0,    96,   109,
       0,     0,     0,     0,    36,     0,    41,     0,    95,    97,
      43,     0,     0,     0,     0,     0,    37,    59,     0,    42,
      35,    39,     0,     0,    34,    98,     0,    38,    40
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -265,  -265,  -265,  -265,   274,  -265,  -265,   262,  -265,    85,
     247,  -264,  -265,   221,   165,  -265,  -265,  -265,   -41,  -265,
    -265,  -265,  -265,    26,    33,  -265,  -265,  -265,  -265,  -265,
    -114,     5,  -265,   279,     4,  -265,   248,  -265,  -265,   211,
       0,  -265,  -265,  -265,    -3,   -39,   204,  -115,  -197,  -265,
     -57,   -34,   -33,    88,  -265,  -265,  -265,  -265,  -265,    32,
      18,   142,   127,   137,    17,   -61,    21,    23,   -27,  -265,
    -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,  -265,    28,
     202
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    18,    19,    20,    21,    22,    23,    35,   129,   130,
      75,    76,    77,    78,    79,    80,    81,   335,   336,    82,
     219,   278,   304,   220,   221,    83,    84,    85,    86,    24,
     114,   115,    26,    27,    87,    29,    30,   117,    47,    48,
     148,   201,   269,   317,   318,    43,    44,    45,   205,   273,
     206,   141,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   142,
     143,   168,   107,   108,   109,   110,   111,   112,   113,   266,
     225
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      31,    89,   118,   200,    28,    25,   140,   272,   301,    31,
     132,   119,   134,    33,   149,    89,   214,   122,   308,   119,
      31,   212,   333,   -76,    28,    25,    31,   119,   328,   314,
      41,   188,   280,   119,    38,    88,    31,   124,   334,   320,
      28,    32,   121,    89,   299,   290,   125,    34,   154,    88,
      31,   343,    36,   297,   131,   297,   344,   331,   332,   189,
     302,   170,   173,   139,    37,   207,   208,   171,    42,   341,
     120,   213,    31,  -194,   155,    46,   150,    88,   202,   222,
     223,     1,   348,   316,   267,   122,   237,   231,   232,   181,
     182,   281,   292,    50,   236,   291,   275,   133,   238,   135,
     116,     2,     3,   298,   319,   325,   322,   323,     4,   190,
     191,   235,   324,     6,    31,   241,    31,    31,    28,   198,
     199,    28,   251,   252,   253,   254,     8,    31,  -194,   226,
      10,   211,   123,   174,   239,   175,    88,   136,   263,   265,
      11,   170,   170,   170,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   170,   137,   170,   170,   170,   170,   170,
     170,   170,   279,    13,    14,   260,   261,   262,   144,   238,
     183,   184,   185,   186,   192,   193,   194,   145,     1,    51,
      52,    53,    54,    55,    56,    57,   176,    31,   177,   146,
     187,   255,  -194,   155,   244,   245,   170,   170,   249,   250,
      31,    59,   286,   287,    28,   198,   242,   243,   151,   256,
     257,   152,    31,   258,   259,   156,   131,   169,   178,   180,
     179,   222,   195,   222,   345,     1,  -193,   196,    63,   210,
     215,   216,    64,   265,   224,   228,   233,   229,    65,   230,
     315,   234,    66,    67,   240,     2,     3,   270,    89,   122,
     284,   274,     4,   282,   300,     5,   306,     6,     7,    89,
     283,   294,   288,   289,   316,   147,   293,   295,   280,    89,
       8,   296,     9,   326,    10,   309,   327,   342,   310,   321,
     311,   330,    88,   339,    11,   338,   340,    89,    89,   313,
     337,   346,   334,    88,    39,    49,   126,   276,   153,    89,
      12,   218,   347,    88,   305,    40,   247,    13,    14,    15,
      16,   138,    89,   307,   329,    17,   285,   248,   312,     0,
     246,    88,    88,   203,     0,     1,    51,    52,    53,    54,
      55,    56,    57,    88,     0,   209,     0,     0,    31,     0,
       0,   227,    28,     0,     0,    31,    88,     0,    59,    28,
     198,     1,    51,    52,    53,    54,    55,    56,    57,     1,
      51,    52,    53,    54,    55,    56,    57,     0,     0,     0,
       0,     2,     3,    58,    59,    63,     0,     0,     4,    64,
      60,     0,    59,     6,     0,    65,     0,     0,     0,    66,
      67,     0,     0,     0,     0,     0,     8,    61,     0,    62,
      10,    63,     0,     0,     0,    64,     0,     0,     0,   172,
      11,    65,   277,    64,     0,    66,    67,     0,     0,    65,
       0,     0,     0,     0,    68,    69,     0,    70,    71,     0,
       0,     0,     0,    13,    14,     0,    72,     0,    73,     0,
       0,     0,     1,    74,     1,    51,    52,    53,    54,    55,
      56,    57,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     2,     3,     2,     3,    58,    59,     0,     4,
       0,     4,   127,    60,     6,     0,     6,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     8,     0,     8,
      61,    10,    62,    10,    63,     0,     0,     0,    64,     0,
       0,    11,     0,    11,    65,     0,     0,     0,    66,    67,
       0,     0,     0,     0,     0,     0,     0,    68,    69,     0,
      70,    71,     0,     0,    13,    14,    13,    14,     0,    72,
       0,     0,     0,     0,     0,     0,    74,     1,    51,    52,
      53,    54,    55,    56,    57,     0,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,     2,     3,     0,
      59,     0,     0,     0,     4,     0,     0,     0,     1,     6,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     8,     0,     0,     0,    10,    63,     2,     3,
       0,    64,     0,     0,     0,     4,    11,    65,     5,     0,
       6,    66,    67,     0,     0,     0,     0,     0,     0,     1,
     197,     0,     0,     8,     0,     0,     0,    10,     0,    13,
      14,     0,    72,     0,   217,     1,     0,    11,     0,     2,
       3,     0,     0,     0,     0,   268,     4,     0,     0,     5,
       0,     6,     0,     0,     0,     2,     3,     0,     0,     0,
      13,    14,     4,    16,     8,     5,     0,     6,    10,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    11,     0,
       8,     0,     0,     0,    10,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    11,     0,     0,     0,     0,     0,
       0,    13,    14,     1,    16,     1,    51,    52,    53,    54,
      55,    56,    57,     0,     0,     0,     0,    13,    14,     0,
      16,     0,     0,     2,     3,     2,     3,     0,    59,     0,
       4,     0,     4,   127,     0,     6,     0,     6,     0,     0,
       1,    51,    52,    53,    54,    55,    56,    57,     8,     0,
       8,     0,    10,     0,    10,    63,     0,     0,     0,    64,
       0,     0,    11,    59,    11,    65,     0,     0,     0,    66,
      67,     0,     1,    51,    52,    53,    54,    55,    56,    57,
       0,   128,     0,     0,     0,    13,    14,    13,    14,     0,
      63,     0,   204,     0,    64,    59,     0,     0,     0,     0,
      65,     0,     0,     0,    66,    67,     1,    51,    52,    53,
      54,    55,    56,    57,     0,     0,     0,     0,     0,     0,
     271,     0,    63,     0,     0,     0,    64,     0,     0,    59,
       0,     0,    65,     0,     0,     0,    66,    67,     1,    51,
      52,    53,    54,    55,    56,    57,     0,     0,     0,     0,
       0,   283,     0,     0,     0,     0,    63,     0,     0,     0,
      64,    59,     0,     0,     0,     0,    65,     0,     0,     0,
      66,    67,     1,    51,    52,    53,    54,    55,    56,    57,
       0,     0,     0,     0,   264,     0,     0,     0,    63,     0,
       0,     0,    64,     0,     0,    59,     0,     0,    65,     0,
       0,     0,    66,    67,     1,    51,    52,    53,    54,    55,
      56,    57,     0,     0,     0,     0,   303,     0,     0,     0,
       0,     0,    63,     0,   204,     0,    64,    59,     0,     0,
       0,     0,    65,     0,     0,     0,    66,    67,     1,    51,
      52,    53,    54,    55,    56,    57,     0,     0,     0,     0,
       0,     0,     0,     0,    63,     0,     0,     0,    64,     0,
       0,    59,     0,     0,    65,     0,     0,     0,    66,    67,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   172,     0,
       0,     0,    64,     0,     0,     0,     0,     0,    65,     0,
       0,     0,    66,    67
};

static const yytype_int16 yycheck[] =
{
       0,    35,    41,   117,     0,     0,    63,   204,    31,     9,
       3,    31,     3,     9,    71,    49,   131,    54,   282,    31,
      20,    31,    37,     3,    20,    20,    26,    31,    39,   293,
      26,    56,    31,    31,     0,    35,    36,    31,    53,   303,
      36,     3,    11,    77,    81,    31,    40,     3,    87,    49,
      50,    38,     3,    31,    50,    31,    43,   321,   322,    84,
      83,    94,    95,    63,     3,   122,   123,    94,     3,   333,
      90,    81,    72,    53,    54,     3,    72,    77,    90,   136,
     137,     3,   346,    94,   199,    54,    90,   144,   145,    64,
      65,    90,    90,    53,   151,    81,   211,    90,   155,    90,
      53,    23,    24,    81,   301,    81,    37,    38,    30,    67,
      68,   150,    43,    35,   114,   172,   116,   117,   114,   114,
     116,   117,   183,   184,   185,   186,    48,   127,    53,    54,
      52,   127,    11,    59,   168,    61,   136,    53,   195,   196,
      62,   174,   175,   176,   177,   178,   179,   180,   181,   182,
     183,   184,   185,   186,    53,   188,   189,   190,   191,   192,
     193,   194,   219,    85,    86,   192,   193,   194,    53,   226,
      72,    73,    74,    75,    69,    70,    71,    53,     3,     4,
       5,     6,     7,     8,     9,    10,    58,   187,    60,    53,
      92,   187,    53,    54,   176,   177,   229,   230,   181,   182,
     200,    26,   229,   230,   200,   200,   174,   175,    53,   188,
     189,    44,   212,   190,   191,    90,   212,    34,    27,    22,
      28,   278,    54,   280,   338,     3,    53,    53,    53,    42,
      90,    90,    57,   290,    54,    81,     4,    81,    63,    81,
     297,    90,    67,    68,     3,    23,    24,    46,   282,    54,
      54,    82,    30,    81,     3,    33,    90,    35,    36,   293,
      82,    82,    81,    81,    94,    90,    81,    81,    31,   303,
      48,    82,    50,    47,    52,    82,     3,   334,    90,    81,
      90,    41,   282,    41,    62,    91,    43,   321,   322,    90,
      90,    81,    53,   293,    20,    33,    49,   212,    77,   333,
      78,   136,   343,   303,   278,    26,   179,    85,    86,    87,
      88,    63,   346,   280,   317,    93,   228,   180,   290,    -1,
     178,   321,   322,   119,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,   333,    -1,   124,    -1,    -1,   338,    -1,
      -1,   139,   338,    -1,    -1,   345,   346,    -1,    26,   345,
     345,     3,     4,     5,     6,     7,     8,     9,    10,     3,
       4,     5,     6,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    23,    24,    25,    26,    53,    -1,    -1,    30,    57,
      32,    -1,    26,    35,    -1,    63,    -1,    -1,    -1,    67,
      68,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,    51,
      52,    53,    -1,    -1,    -1,    57,    -1,    -1,    -1,    53,
      62,    63,    90,    57,    -1,    67,    68,    -1,    -1,    63,
      -1,    -1,    -1,    -1,    76,    77,    -1,    79,    80,    -1,
      -1,    -1,    -1,    85,    86,    -1,    88,    -1,    90,    -1,
      -1,    -1,     3,    95,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    23,    24,    23,    24,    25,    26,    -1,    30,
      -1,    30,    33,    32,    35,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    48,
      49,    52,    51,    52,    53,    -1,    -1,    -1,    57,    -1,
      -1,    62,    -1,    62,    63,    -1,    -1,    -1,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    76,    77,    -1,
      79,    80,    -1,    -1,    85,    86,    85,    86,    -1,    88,
      -1,    -1,    -1,    -1,    -1,    -1,    95,     3,     4,     5,
       6,     7,     8,     9,    10,    -1,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    23,    24,    -1,
      26,    -1,    -1,    -1,    30,    -1,    -1,    -1,     3,    35,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    52,    53,    23,    24,
      -1,    57,    -1,    -1,    -1,    30,    62,    63,    33,    -1,
      35,    67,    68,    -1,    -1,    -1,    -1,    -1,    -1,     3,
      45,    -1,    -1,    48,    -1,    -1,    -1,    52,    -1,    85,
      86,    -1,    88,    -1,    90,     3,    -1,    62,    -1,    23,
      24,    -1,    -1,    -1,    -1,    29,    30,    -1,    -1,    33,
      -1,    35,    -1,    -1,    -1,    23,    24,    -1,    -1,    -1,
      85,    86,    30,    88,    48,    33,    -1,    35,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    62,    -1,
      48,    -1,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    62,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,     3,    88,     3,     4,     5,     6,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    85,    86,    -1,
      88,    -1,    -1,    23,    24,    23,    24,    -1,    26,    -1,
      30,    -1,    30,    33,    -1,    35,    -1,    35,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    48,    -1,
      48,    -1,    52,    -1,    52,    53,    -1,    -1,    -1,    57,
      -1,    -1,    62,    26,    62,    63,    -1,    -1,    -1,    67,
      68,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    81,    -1,    -1,    -1,    85,    86,    85,    86,    -1,
      53,    -1,    55,    -1,    57,    26,    -1,    -1,    -1,    -1,
      63,    -1,    -1,    -1,    67,    68,     3,     4,     5,     6,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    -1,    53,    -1,    -1,    -1,    57,    -1,    -1,    26,
      -1,    -1,    63,    -1,    -1,    -1,    67,    68,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    82,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,
      57,    26,    -1,    -1,    -1,    -1,    63,    -1,    -1,    -1,
      67,    68,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    57,    -1,    -1,    26,    -1,    -1,    63,    -1,
      -1,    -1,    67,    68,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    81,    -1,    -1,    -1,
      -1,    -1,    53,    -1,    55,    -1,    57,    26,    -1,    -1,
      -1,    -1,    63,    -1,    -1,    -1,    67,    68,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    57,    -1,
      -1,    26,    -1,    -1,    63,    -1,    -1,    -1,    67,    68,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    53,    -1,
      -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    63,    -1,
      -1,    -1,    67,    68
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    23,    24,    30,    33,    35,    36,    48,    50,
      52,    62,    78,    85,    86,    87,    88,    93,    97,    98,
      99,   100,   101,   102,   125,   127,   128,   129,   130,   131,
     132,   136,     3,   130,     3,   103,     3,     3,     0,   100,
     129,   130,     3,   141,   142,   143,     3,   134,   135,   103,
      53,     4,     5,     6,     7,     8,     9,    10,    25,    26,
      32,    49,    51,    53,    57,    63,    67,    68,    76,    77,
      79,    80,    88,    90,    95,   106,   107,   108,   109,   110,
     111,   112,   115,   121,   122,   123,   124,   130,   136,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   168,   169,   170,
     171,   172,   173,   174,   126,   127,    53,   133,   141,    31,
      90,    11,    54,    11,    31,    40,   106,    33,    81,   104,
     105,   130,     3,    90,     3,    90,    53,    53,   132,   136,
     146,   147,   165,   166,    53,    53,    53,    90,   136,   146,
     130,    53,    44,   109,   141,    54,    90,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,   167,    34,
     148,   164,    53,   148,    59,    61,    58,    60,    27,    28,
      22,    64,    65,    72,    73,    74,    75,    92,    56,    84,
      67,    68,    69,    70,    71,    54,    53,    45,   127,   130,
     126,   137,    90,   142,    55,   144,   146,   146,   146,   135,
      42,   130,    31,    81,   143,    90,    90,    90,   110,   116,
     119,   120,   146,   146,    54,   176,    54,   176,    81,    81,
      81,   146,   146,     4,    90,   141,   146,    90,   146,   147,
       3,   146,   155,   155,   156,   156,   157,   158,   159,   160,
     160,   161,   161,   161,   161,   130,   162,   162,   163,   163,
     164,   164,   164,   146,    81,   146,   175,   143,    29,   138,
      46,    83,   144,   145,    82,   143,   105,    90,   117,   146,
      31,    90,    81,    82,    54,   149,   164,   164,    81,    81,
      31,    81,    90,    81,    82,    81,    82,    31,    81,    81,
       3,    31,    83,    81,   118,   119,    90,   120,   107,    82,
      90,    90,   175,    90,   107,   146,    94,   139,   140,   144,
     107,    81,    37,    38,    43,    81,    47,     3,    39,   140,
      41,   107,   107,    37,    53,   113,   114,    90,    91,    41,
      43,   107,   146,    38,    43,   126,    81,   114,   107
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    98,    99,    99,   100,   100,   100,   100,
     101,   102,   103,   103,   104,   104,   105,   105,   106,   106,
     107,   108,   108,   109,   109,   110,   110,   111,   111,   111,
     111,   111,   111,   111,   112,   112,   112,   113,   113,   113,
     114,   115,   115,   115,   116,   116,   116,   117,   117,   118,
     119,   119,   120,   121,   121,   121,   121,   121,   121,   122,
     122,   123,   124,   125,   125,   125,   126,   126,   127,   127,
     128,   128,   129,   129,   130,   131,   131,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   133,   133,   134,   134,
     135,   135,   136,   137,   137,   138,   139,   139,   140,   141,
     141,   142,   142,   143,   143,   144,   144,   144,   145,   145,
     145,   146,   147,   147,   148,   148,   149,   149,   150,   151,
     151,   152,   152,   153,   153,   154,   154,   154,   155,   155,
     155,   156,   156,   157,   157,   158,   158,   159,   159,   159,
     160,   160,   160,   160,   160,   160,   161,   161,   161,   162,
     162,   162,   163,   163,   163,   163,   164,   164,   164,   164,
     165,   165,   166,   167,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   168,   169,   169,   170,   170,   170,
     170,   170,   170,   170,   170,   170,   170,   170,   171,   171,
     172,   173,   173,   174,   174,   175,   175,   176,   176
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     2,     1,     1,     1,     1,
       5,     4,     4,     3,     1,     3,     2,     3,     1,     1,
       1,     1,     2,     1,     1,     3,     4,     2,     1,     1,
       1,     1,     1,     1,     8,     8,     6,     1,     3,     2,
       4,     6,     8,     7,     2,     1,     1,     2,     1,     1,
       1,     3,     1,     3,     2,     3,     2,     3,     2,     7,
       5,     5,     5,     4,     5,     4,     1,     2,     4,     3,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     4,     0,     1,     3,
       3,     1,     1,     2,     1,     4,     1,     2,     4,     1,
       3,     1,     3,     1,     4,     1,     2,     3,     1,     3,
       2,     1,     1,     3,     2,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     1,     3,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     3,
       1,     3,     3,     3,     3,     3,     1,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     1,     4,     4,     4,
       1,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     4,     4,
       3,     4,     3,     1,     1,     1,     3,     2,     3
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
      
#line 1746 "parser.tab.c" /* yacc.c:1646  */
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
#line 514 "parser.y" /* yacc.c:1906  */


void yyerror(const char *s) {
	fprintf(stderr, "Error: %s at '%s' at line %i.\n", s, yytext, yylineno);
}
