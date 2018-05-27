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

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    PRINT = 258,
    PRINTLN = 259,
    IF = 260,
    ELSE = 261,
    FOR = 262,
    VAR = 263,
    NEWLINE = 264,
    INC = 265,
    DEC = 266,
    PT = 267,
    L = 268,
    S = 269,
    LE = 270,
    SE = 271,
    EE = 272,
    NE = 273,
    AA = 274,
    SA = 275,
    MA = 276,
    DA = 277,
    MOA = 278,
    I_CONST = 279,
    F_CONST = 280,
    STRING = 281,
    INT = 282,
    FLOAT = 283,
    VOID = 284,
    ID = 285
  };
#endif
/* Tokens.  */
#define PRINT 258
#define PRINTLN 259
#define IF 260
#define ELSE 261
#define FOR 262
#define VAR 263
#define NEWLINE 264
#define INC 265
#define DEC 266
#define PT 267
#define L 268
#define S 269
#define LE 270
#define SE 271
#define EE 272
#define NE 273
#define AA 274
#define SA 275
#define MA 276
#define DA 277
#define MOA 278
#define I_CONST 279
#define F_CONST 280
#define STRING 281
#define INT 282
#define FLOAT 283
#define VOID 284
#define ID 285

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 37 "compiler_hw2.y" /* yacc.c:1909  */

    int i_val;
    double f_val;
    char* string;

#line 120 "y.tab.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
