/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

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
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "chspc.y" /* yacc.c:339  */
/****************************************************************************
                    Compiler for the Chess++ language
*******************************************************************************/
/*=============================================================================
        C Libraries, Symbol Table, Code Generator & Other C Code.
==============================================================================*/
#include <stdio.h>              /* For I/O                                    */
#include <math.h>               /* For math operations in here                */
#include <stdlib.h>             /* For malloc here and in symbol table        */
#include <stddef.h>             /* ??????                                     */
#include <ctype.h>              /* For comparing types and regex              */
#include <string.h>             /* For strcmp here and in symbol table        */
#include "symtable.h"           /* Symbol Table                               */
//#define YYSTYPE char *
void yyerror(char *s);         /* Error function                              */
void warning(char *s,char *t); /* Warning function                            */
extern int yylex(void);        /* useless for now                             */
int errors;                    /* Errors count                                */ 

/*-------------------------------------------------------------------------------
            Install identifier & check if previously defined.
-------------------------------------------------------------------------------*/
install ( char *sym_name ){
    symrec *s;
    s = getsym (sym_name);
    if (s == 0)
        s = putsym (sym_name);
    else { errors++;
        printf( "%s is already defined\n", sym_name );
    }
}
/*------------------------------------------------------------------------------
                If identifier is defined, generate code
-------------------------------------------------------------------------------*/
// context_check( enum code_ops operation, char *sym_name ){ 
//     symrec *identifier;
//     identifier = getsym( sym_name );
//     if ( identifier == 0 ){ 
//         errors++;
//         printf( "%s", sym_name );
//         printf( "%s\n", " is an undeclared identifier" );
//     }
//     else gen_code( operation, identifier->offset );
// }
/*===============================================================================
                                SEMANTIC RECORDS
===============================================================================*/

#line 115 "chspc.tab.c" /* yacc.c:339  */

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
   by #include "chspc.tab.h".  */
#ifndef YY_YY_CHSPC_TAB_H_INCLUDED
# define YY_YY_CHSPC_TAB_H_INCLUDED
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
    ID_CLASS = 258,
    LOGIC_OP = 259,
    COMP_OP = 260,
    ASSIGN_OP = 261,
    CLASS = 262,
    MAIN = 263,
    RIGHT_ASSIGN = 264,
    LEFT_ASSIGN = 265,
    ADD_ASSIGN = 266,
    SUB_ASSIGN = 267,
    MUL_ASSIGN = 268,
    DIV_ASSIGN = 269,
    MOD_ASSIGN = 270,
    AND_ASSIGN = 271,
    XOR_ASSIGN = 272,
    OR_ASSIGN = 273,
    RIGHT_OP = 274,
    LEFT_OP = 275,
    INC_OP = 276,
    DEC_OP = 277,
    PTR_OP = 278,
    AND_OP = 279,
    OR_OP = 280,
    LE_OP = 281,
    GE_OP = 282,
    EQ_OP = 283,
    NE_OP = 284,
    IDENTIFIER = 285,
    METHOD_KW = 286,
    NEW_KW = 287,
    CTRL_KEYWORD = 288,
    RETURN = 289,
    STRING_LITERAL = 290,
    CONSTANT = 291,
    END = 292,
    BEGIN_ = 293,
    KING = 294,
    ROOK = 295,
    PAWN = 296,
    BISHOP = 297,
    KNIGHT = 298,
    CHECK = 299,
    CHECKMATE = 300,
    TIE = 301,
    ELSE = 302,
    IF = 303,
    ACCESS_MOD = 304,
    CONS_VARS_SP = 305,
    INT = 306,
    DOUBLE = 307,
    FLOAT = 308,
    BOOLEAN = 309,
    STRING = 310,
    CHAR = 311,
    VOID = 312,
    AUTO = 313,
    CASE = 314,
    CONST = 315,
    CONTINUE = 316,
    DEFAULT = 317,
    DO = 318,
    ENUM = 319,
    EXTERN = 320,
    FOR = 321,
    GOTO = 322,
    LONG = 323,
    REGISTER = 324,
    SHORT = 325,
    SIGNED = 326,
    SIZEOF = 327,
    STATIC = 328,
    STRUCT = 329,
    SWITCH = 330,
    TYPEDEF = 331,
    UNION = 332,
    UNSIGNED = 333,
    VOLATILE = 334,
    WHILE = 335,
    ELLIPSIS = 336
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
#line 49 "chspc.y" /* yacc.c:355  */
union semrec
{
#line 50 "chspc.y" /* yacc.c:355  */

    struct{
        char* val;
        char* name;
        char* type;
        char* scope;
        int num;
    } attr;

#line 247 "chspc.tab.c" /* yacc.c:355  */
};
#line 49 "chspc.y" /* yacc.c:355  */
typedef union semrec YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CHSPC_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 264 "chspc.tab.c" /* yacc.c:358  */

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
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   300

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  96
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  56
/* YYNRULES -- Number of rules.  */
#define YYNRULES  134
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  265

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   336

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    95,     2,     2,     2,    86,     2,     2,
      89,    90,    84,    82,    92,    83,    88,    85,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    87,    91,
      94,     2,    93,     2,     2,     2,     2,     2,     2,     2,
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
      75,    76,    77,    78,    79,    80,    81
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    86,    86,    89,    88,    95,    97,    98,    98,   101,
     102,   103,   104,   106,   108,   109,   112,   114,   115,   116,
     117,   118,   119,   120,   122,   123,   124,   125,   127,   128,
     129,   130,   132,   133,   134,   135,   137,   138,   139,   140,
     142,   143,   144,   145,   147,   148,   150,   152,   154,   157,
     167,   168,   169,   171,   172,   174,   175,   176,   177,   178,
     179,   181,   182,   184,   185,   186,   187,   188,   189,   191,
     193,   194,   195,   197,   198,   204,   205,   206,   207,   209,
     210,   212,   213,   215,   216,   218,   219,   221,   222,   228,
     229,   230,   232,   233,   234,   236,   237,   238,   240,   241,
     242,   243,   247,   249,   250,   251,   253,   254,   255,   257,
     258,   259,   260,   261,   262,   274,   275,   276,   277,   278,
     279,   281,   283,   285,   287,   289,   290,   292,   293,   296,
     298,   299,   301,   303,   305
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID_CLASS", "LOGIC_OP", "COMP_OP",
  "ASSIGN_OP", "CLASS", "MAIN", "RIGHT_ASSIGN", "LEFT_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "RIGHT_OP", "LEFT_OP", "INC_OP",
  "DEC_OP", "PTR_OP", "AND_OP", "OR_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "IDENTIFIER", "METHOD_KW", "NEW_KW", "CTRL_KEYWORD", "RETURN",
  "STRING_LITERAL", "CONSTANT", "END", "BEGIN_", "KING", "ROOK", "PAWN",
  "BISHOP", "KNIGHT", "CHECK", "CHECKMATE", "TIE", "ELSE", "IF",
  "ACCESS_MOD", "CONS_VARS_SP", "INT", "DOUBLE", "FLOAT", "BOOLEAN",
  "STRING", "CHAR", "VOID", "AUTO", "CASE", "CONST", "CONTINUE", "DEFAULT",
  "DO", "ENUM", "EXTERN", "FOR", "GOTO", "LONG", "REGISTER", "SHORT",
  "SIGNED", "SIZEOF", "STATIC", "STRUCT", "SWITCH", "TYPEDEF", "UNION",
  "UNSIGNED", "VOLATILE", "WHILE", "ELLIPSIS", "'+'", "'-'", "'*'", "'/'",
  "'%'", "':'", "'.'", "'('", "')'", "';'", "','", "'>'", "'<'", "'!'",
  "$accept", "program", "class", "$@1", "call_to_func", "access_mod", "@2",
  "body", "def_main", "params", "def_vars", "def_tipo", "end_of_int_def",
  "end_of_str_def", "end_of_dou_def", "end_of_cha_def", "end_of_bool_def",
  "end_of_user_def", "bool_types", "end_of_any_def_id",
  "end_of_call_funct", "def_methods", "params_def", "type", "data_type",
  "m_type", "m_body", "assign_vars", "is_def_or_assign", "op_assigment",
  "aritme_op_or_assign", "inc_dec_op", "art_as", "inc", "dec",
  "const_data", "return_ins", "expression", "term", "factor",
  "def_conditionals", "conditional", "condition", "comp_op",
  "conditional_body", "nested_conditional_def", "pawn", "bishop", "knight",
  "else", "else_if", "def_loops", "loop", "nested_loop_def", "king",
  "rook", YY_NULLPTR
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
     335,   336,    43,    45,    42,    47,    37,    58,    46,    40,
      41,    59,    44,    62,    60,    33
};
# endif

#define YYPACT_NINF -144

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-144)))

#define YYTABLE_NINF -13

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     -34,  -144,    20,  -144,    28,  -144,  -144,    18,  -144,   -15,
     -23,    14,    39,  -144,   -15,    45,    24,    43,    66,    84,
      86,    93,    95,    98,   -15,  -144,    34,  -144,    41,  -144,
      -2,    53,    54,   136,   136,   136,  -144,    16,  -144,     0,
      58,     3,     4,     4,     6,     7,     8,  -144,   157,    16,
     140,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,  -144,
    -144,    85,  -144,  -144,    16,  -144,  -144,    90,    72,    91,
    -144,  -144,   -13,    19,  -144,  -144,  -144,  -144,    27,  -144,
    -144,  -144,  -144,  -144,    81,  -144,  -144,  -144,  -144,   -11,
    -144,  -144,  -144,  -144,    88,  -144,  -144,  -144,  -144,  -144,
     105,  -144,   174,   181,   122,  -144,    16,    16,    16,    16,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,   208,   124,   128,
    -144,   -55,    94,   125,   127,  -144,   142,   143,   144,   175,
     148,   150,  -144,  -144,  -144,  -144,  -144,   154,   160,   218,
    -144,  -144,  -144,  -144,  -144,  -144,  -144,     2,    16,   163,
     175,   175,   204,   175,  -144,   175,   175,    16,    16,   221,
     168,   -13,  -144,   161,   176,   203,  -144,  -144,  -144,  -144,
    -144,  -144,   178,   179,   -13,  -144,  -144,   175,  -144,  -144,
    -144,   177,   182,   183,   184,   185,   226,  -144,  -144,  -144,
     231,  -144,  -144,   186,  -144,  -144,   228,    16,    16,    16,
      16,    16,  -144,  -144,  -144,   189,    -1,   188,   190,   191,
     192,   193,   248,    16,  -144,  -144,  -144,  -144,  -144,  -144,
      16,   202,   202,   202,   202,   202,  -144,  -144,  -144,   197,
     194,   202,   202,  -144,  -144,   202,   202,  -144,  -144,   239,
     240,   203,   202,  -144,  -144,  -144,  -144,   202,   241,   243,
     242,   245,  -144,  -144,   205,   202,  -144,  -144,  -144,    16,
    -144,   206,   202,   240,  -144
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       6,     7,     0,     2,     0,     8,     1,     0,     3,     6,
       0,     0,     0,    11,     6,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,    16,     0,    10,     0,    73,
       0,    83,    85,    82,    82,    82,    23,     0,    74,    82,
       0,     0,     0,     0,     0,     0,     0,     9,     0,    14,
       0,    45,    71,    84,    79,    86,    80,    81,    76,    77,
      78,    99,    88,    87,     0,   101,   100,     0,    94,    97,
      72,    75,    52,     0,    27,    17,    25,    26,     0,    35,
      19,    33,    34,    20,     0,    43,    22,    41,    42,     0,
      31,    18,    29,    30,     0,    39,    21,    37,    38,     4,
       0,    15,     0,     0,     0,    70,     0,     0,     0,     0,
      54,    55,    57,    58,    60,    56,    59,     0,     0,     0,
      53,     0,     0,     0,     0,    46,     0,     0,     0,    91,
       0,     0,    98,    92,    93,    95,    96,     0,     0,     0,
      47,    24,    48,    32,    40,    28,    36,     0,     0,     0,
      91,    91,     0,    91,    68,    91,    91,    14,    14,     0,
       0,    52,    23,   101,     0,     0,    67,    63,    13,    64,
      65,    66,     0,     0,    52,    62,    61,    91,    50,    90,
      89,     0,     0,     0,     0,     0,     0,   103,   104,   105,
       0,   130,   131,     0,     5,    51,     0,     0,     0,     0,
       0,     0,   102,   129,    44,     0,   108,     0,     0,     0,
       0,     0,     0,     0,   111,   112,   113,   114,   109,   110,
       0,    91,    91,    91,    91,    91,    49,   107,   106,     0,
       0,    91,    91,   120,   133,    91,    91,   134,   122,     0,
     128,     0,    91,   115,   118,   116,   117,    91,     0,   126,
       0,     0,   119,   123,     0,    91,   124,   121,   132,     0,
     125,     0,    91,   128,   127
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -144,  -144,  -144,  -144,   -73,   292,  -144,    23,  -144,    36,
     -10,  -144,  -144,  -144,   250,  -144,  -144,  -144,  -144,   155,
     162,  -144,  -143,  -110,  -144,  -144,   -24,   -17,   151,  -144,
    -144,  -144,   149,  -144,  -144,  -144,    15,   -35,    48,  -139,
    -144,    56,   -98,  -144,   -45,  -144,  -144,  -144,  -144,  -144,
      32,  -144,    59,  -144,  -144,  -144
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     9,    65,    11,     5,    12,    13,   100,
     231,    25,    75,    91,    80,    96,    86,    52,   126,    81,
      82,    14,   118,   119,   120,   177,   152,   232,    36,    37,
      38,    39,    58,    54,    56,    66,   233,   101,    68,    69,
     155,   186,   207,   220,   234,   235,   187,   188,   189,   256,
     249,   156,   190,   236,   191,   192
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     123,    24,    67,   213,    50,   123,    57,   137,    29,    73,
      78,   123,    84,    89,    94,     1,   123,   110,   178,   121,
       6,   123,   -12,    10,   127,   214,   215,   216,   217,   104,
      29,   195,    30,   103,     1,     7,   140,    27,   111,   112,
     113,   114,   115,   116,    16,    17,    61,    47,     8,   121,
     176,    62,    63,    28,    30,   122,   150,   121,   206,   206,
     206,   206,   206,   124,    15,    18,    19,    20,    21,    22,
      23,   133,   134,    40,   206,   163,    26,   150,   150,   117,
     150,   206,   150,   150,    31,    32,    33,    34,    35,    51,
     103,    70,   218,   219,    74,    79,    41,    85,    90,    95,
     208,   209,   210,   211,   150,    64,    31,    32,    33,    34,
      35,   121,   153,   164,    42,   227,    43,   125,   121,   151,
     206,    48,   228,    44,   128,    45,   166,   167,    46,   169,
      49,   170,   171,   153,   153,    53,   153,    55,   153,   153,
     151,   151,    57,   151,   154,   151,   151,    72,   230,   230,
     230,   230,   230,   196,   106,   107,   135,   136,   230,   230,
     153,   261,   230,   230,    99,   154,   154,   151,   154,   230,
     154,   154,   102,   103,   230,   108,   109,   237,   238,   239,
     240,   105,   230,    59,    60,   141,   243,   244,    71,   230,
     245,   246,   154,   172,   173,   129,    76,   252,   110,    87,
      92,    97,   253,    77,   130,   147,    88,    93,    98,   148,
     260,   131,   132,   149,   138,   139,   142,   263,   143,   111,
     112,   113,   114,   115,   116,   175,    18,    19,    20,    21,
      22,    23,   147,   144,   145,   146,   148,   157,   110,   158,
     229,   159,   181,   182,   183,   184,   185,   160,   161,   168,
     165,   174,   179,    18,    19,    20,    21,    22,    23,   111,
     112,   113,   114,   115,   116,   205,   197,   180,   193,   194,
     202,   198,   199,   200,   201,   203,   212,   204,   221,   226,
     222,   223,   224,   225,   241,   242,   247,   248,   257,   254,
     255,   258,     4,    83,   259,   264,   262,   250,   162,     0,
     251
};

static const yytype_int16 yycheck[] =
{
      73,    11,    37,     4,     6,    78,     6,   117,     6,     6,
       6,    84,     6,     6,     6,    49,    89,    30,   161,    30,
       0,    94,    37,    38,    35,    26,    27,    28,    29,    64,
       6,   174,    30,    88,    49,     7,    91,    14,    51,    52,
      53,    54,    55,    56,    30,    31,    30,    24,    30,    30,
     160,    35,    36,     8,    30,    36,   129,    30,   197,   198,
     199,   200,   201,    36,    87,    51,    52,    53,    54,    55,
      56,   106,   107,    30,   213,   148,    37,   150,   151,    92,
     153,   220,   155,   156,    82,    83,    84,    85,    86,    91,
      88,    91,    93,    94,    91,    91,    30,    91,    91,    91,
     198,   199,   200,   201,   177,    89,    82,    83,    84,    85,
      86,    30,   129,   148,    30,   213,    30,    36,    30,   129,
     259,    87,   220,    30,    36,    30,   150,   151,    30,   153,
      89,   155,   156,   150,   151,    82,   153,    83,   155,   156,
     150,   151,     6,   153,   129,   155,   156,    89,   221,   222,
     223,   224,   225,   177,    82,    83,   108,   109,   231,   232,
     177,   259,   235,   236,     7,   150,   151,   177,   153,   242,
     155,   156,    32,    88,   247,    84,    85,   222,   223,   224,
     225,    91,   255,    34,    35,    91,   231,   232,    39,   262,
     235,   236,   177,   157,   158,    90,    41,   242,    30,    44,
      45,    46,   247,    41,    30,    30,    44,    45,    46,    34,
     255,    30,    90,    38,    90,    87,    91,   262,    91,    51,
      52,    53,    54,    55,    56,    57,    51,    52,    53,    54,
      55,    56,    30,    91,    91,    91,    34,    89,    30,    89,
      38,    87,    39,    40,    41,    42,    43,    87,    30,    45,
      87,    30,    91,    51,    52,    53,    54,    55,    56,    51,
      52,    53,    54,    55,    56,    37,    89,    91,    90,    90,
      44,    89,    89,    89,    89,    44,    87,    91,    90,    31,
      90,    90,    90,    90,    87,    91,    47,    47,    46,    48,
      47,    46,     0,    43,    89,   263,    90,   241,   147,    -1,
     241
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    49,    97,    98,   101,   102,     0,     7,    30,    99,
      38,   101,   103,   104,   117,    87,    30,    31,    51,    52,
      53,    54,    55,    56,   106,   107,    37,   103,     8,     6,
      30,    82,    83,    84,    85,    86,   124,   125,   126,   127,
      30,    30,    30,    30,    30,    30,    30,   103,    87,    89,
       6,    91,   113,    82,   129,    83,   130,     6,   128,   128,
     128,    30,    35,    36,    89,   100,   131,   133,   134,   135,
      91,   128,    89,     6,    91,   108,   115,   116,     6,    91,
     110,   115,   116,   110,     6,    91,   112,   115,   116,     6,
      91,   109,   115,   116,     6,    91,   111,   115,   116,     7,
     105,   133,    32,    88,   133,    91,    82,    83,    84,    85,
      30,    51,    52,    53,    54,    55,    56,    92,   118,   119,
     120,    30,    36,   100,    36,    36,   114,    35,    36,    90,
      30,    30,    90,   133,   133,   134,   134,   119,    90,    87,
      91,    91,    91,    91,    91,    91,    91,    30,    34,    38,
     100,   106,   122,   123,   132,   136,   147,    89,    89,    87,
      87,    30,   124,   100,   133,    87,   122,   122,    45,   122,
     122,   122,   105,   105,    30,    57,   119,   121,   118,    91,
      91,    39,    40,    41,    42,    43,   137,   142,   143,   144,
     148,   150,   151,    90,    90,   118,   122,    89,    89,    89,
      89,    89,    44,    44,    91,    37,   135,   138,   138,   138,
     138,   138,    87,     4,    26,    27,    28,    29,    93,    94,
     139,    90,    90,    90,    90,    90,    31,   138,   138,    38,
     100,   106,   123,   132,   140,   141,   149,   140,   140,   140,
     140,    87,    91,   140,   140,   140,   140,    47,    47,   146,
     137,   148,   140,   140,    48,    47,   145,    46,    46,    89,
     140,   138,    90,   140,   146
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    96,    97,    99,    98,   100,   101,   102,   101,   103,
     103,   103,   103,   104,   105,   105,   106,   107,   107,   107,
     107,   107,   107,   107,   108,   108,   108,   108,   109,   109,
     109,   109,   110,   110,   110,   110,   111,   111,   111,   111,
     112,   112,   112,   112,   113,   113,   114,   115,   116,   117,
     118,   118,   118,   119,   119,   120,   120,   120,   120,   120,
     120,   121,   121,   122,   122,   122,   122,   122,   122,   123,
     124,   124,   124,   125,   125,   126,   126,   126,   126,   127,
     127,   128,   128,   129,   129,   130,   130,   131,   131,   132,
     132,   132,   133,   133,   133,   134,   134,   134,   135,   135,
     135,   135,   136,   137,   137,   137,   138,   138,   138,   139,
     139,   139,   139,   139,   139,   140,   140,   140,   140,   140,
     140,   141,   142,   143,   144,   145,   145,   146,   146,   147,
     148,   148,   149,   150,   151
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     8,     6,     0,     0,     2,     3,
       2,     1,     0,     8,     0,     1,     1,     3,     3,     3,
       3,     3,     3,     2,     3,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       3,     1,     1,     1,     7,     1,     1,     3,     3,    12,
       4,     5,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     2,     2,     2,     2,     1,     2,
       3,     2,     2,     1,     1,     2,     2,     2,     2,     2,
       2,     1,     0,     0,     1,     0,     1,     1,     1,     3,
       3,     0,     3,     3,     1,     3,     3,     1,     3,     1,
       1,     1,     4,     1,     1,     1,     3,     3,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     3,
       1,     4,     5,     7,     7,     2,     0,     7,     0,     4,
       1,     1,     4,     5,     5
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
        case 3:
#line 89 "chspc.y" /* yacc.c:1646  */
    { printf("%s-%d-%d\n", (yyvsp[-2].attr.scope), (yyvsp[-1].attr.num), (yyvsp[0].attr.num)); }
#line 1557 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 95 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = "undefined"; printf("%s | %s\n", (yyvsp[-5].attr.name) ,(yyvsp[-3].attr.name)); }
#line 1563 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 97 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.scope) = "Public"; }
#line 1569 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 98 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.scope) = (yyvsp[0].attr.scope); }
#line 1575 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 99 "chspc.y" /* yacc.c:1646  */
    { /*printf("Access Mod: %s\n", $<attr.scope>$); */}
#line 1581 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 114 "chspc.y" /* yacc.c:1646  */
    { /*printf("%s %s = %s|\n", $<attr.type>1, $<attr.name>2, $<attr.val>3); */}
#line 1587 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 122 "chspc.y" /* yacc.c:1646  */
    {(yyval.attr.val) = (yyvsp[-1].attr.val);}
#line 1593 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 123 "chspc.y" /* yacc.c:1646  */
    {(yyval.attr.val) = "undefined";}
#line 1599 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 124 "chspc.y" /* yacc.c:1646  */
    {(yyval.attr.val) = "undefined";}
#line 1605 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 125 "chspc.y" /* yacc.c:1646  */
    {(yyval.attr.val) = "0";}
#line 1611 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 150 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = (yyvsp[0].attr.type); }
#line 1617 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 158 "chspc.y" /* yacc.c:1646  */
    {
            // printf("Method Name: %s\n",$<attr.name>3);
            if(strcmp((yyvsp[-4].attr.type),(yyvsp[-3].attr.type))==0){
                // printf("El tipo devuelto es %s y esta correcto\n",$<attr.type>9);
            }else{
                // printf("Error, no se puede convertir %s a %s de forma automatica\n",$<attr.type>9,$<attr.type>8);
            }
        }
#line 1630 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 171 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = (yyvsp[0].attr.type); }
#line 1636 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 172 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = "undefined"; }
#line 1642 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 174 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = (yyvsp[0].attr.type); }
#line 1648 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 175 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = (yyvsp[0].attr.type); }
#line 1654 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 176 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = (yyvsp[0].attr.type); }
#line 1660 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 177 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = (yyvsp[0].attr.type); }
#line 1666 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 178 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = (yyvsp[0].attr.type); }
#line 1672 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 179 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = (yyvsp[0].attr.type); }
#line 1678 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 181 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = (yyvsp[0].attr.type); }
#line 1684 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 182 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = (yyvsp[0].attr.type); }
#line 1690 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 184 "chspc.y" /* yacc.c:1646  */
    {}
#line 1696 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 186 "chspc.y" /* yacc.c:1646  */
    {}
#line 1702 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 189 "chspc.y" /* yacc.c:1646  */
    {(yyval.attr.type) = (yyvsp[0].attr.type); }
#line 1708 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 221 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = (yyvsp[0].attr.type); }
#line 1714 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 222 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = (yyvsp[0].attr.type); }
#line 1720 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 228 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = (yyvsp[-1].attr.type); }
#line 1726 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 229 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = (yyvsp[-1].attr.type); }
#line 1732 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 230 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = "void"; }
#line 1738 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 232 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) =  (strcmp((yyvsp[-2].attr.type),(yyvsp[0].attr.type)) == 0) ? (yyvsp[-2].attr.type) : "none"; }
#line 1744 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 233 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) =  (strcmp((yyvsp[-2].attr.type),(yyvsp[0].attr.type)) == 0) ? (yyvsp[-2].attr.type) : "none"; }
#line 1750 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 234 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = (yyvsp[0].attr.type); }
#line 1756 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 236 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) =  (strcmp((yyvsp[-2].attr.type),(yyvsp[0].attr.type)) == 0) ? (yyvsp[-2].attr.type) : "none"; }
#line 1762 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 237 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) =  (strcmp((yyvsp[-2].attr.type),(yyvsp[0].attr.type)) == 0) ? (yyvsp[-2].attr.type) : "none"; }
#line 1768 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 238 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = (yyvsp[0].attr.type); }
#line 1774 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 240 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = (yyvsp[-1].attr.type); }
#line 1780 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 241 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = (yyvsp[0].attr.type); }
#line 1786 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 242 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = (yyvsp[0].attr.type); }
#line 1792 "chspc.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 243 "chspc.y" /* yacc.c:1646  */
    { (yyval.attr.type) = (yyvsp[0].attr.type); }
#line 1798 "chspc.tab.c" /* yacc.c:1646  */
    break;


#line 1802 "chspc.tab.c" /* yacc.c:1646  */
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
#line 307 "chspc.y" /* yacc.c:1906  */


#include <stdio.h>
#include <ctype.h>
extern int yylineno;
extern char* yytext;
char *progname;
//char *yylval;
FILE* file;

main( int argc, char *argv[] )
{   
    // file = fopen("tabla.out", "w+");
    // int ntoken, vtoken;
    // ntoken = yylex();
    // while (ntoken)
    // {
    //     printf("%s \n", yytext);
    //     fprintf(file, "%s \n", yytext);
    //     ntoken = yylex();
    //     fflush(file);
    // }
    yyparse();
}

void
yyerror( char *s )
{ 
    errors++;
    warning( s , ( char * )0 ); yyparse();
}

void
warning( char *s , char *t )
{ 
    fprintf( stderr ,"%s: %s\n" , progname , s ); 
    if ( t ) 
        fprintf( stderr , " %s\n" , t );
}
