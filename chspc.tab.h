/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison interface for Yacc-like parsers in C

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
#line 49 "chspc.y" /* yacc.c:1909  */
union semrec
{
#line 50 "chspc.y" /* yacc.c:1909  */

    struct{
        char* val;
        char* name;
        char* type;
        char* scope;
        int num;
    } attr;

#line 146 "chspc.tab.h" /* yacc.c:1909  */
};
#line 49 "chspc.y" /* yacc.c:1909  */
typedef union semrec YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_CHSPC_TAB_H_INCLUDED  */
