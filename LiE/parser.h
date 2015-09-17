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

#ifndef YY_YY_PARSER_H_INCLUDED
# define YY_YY_PARSER_H_INCLUDED
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
    IF = 1,
    THEN = 2,
    ELSE = 3,
    FI = 4,
    FOR = 5,
    TO = 6,
    DOWNTO = 7,
    IN = 8,
    ROW = 9,
    WHILE = 10,
    DO = 11,
    OD = 12,
    LOC = 13,
    RETURN = 14,
    BREAK = 15,
    MAKE = 16,
    APPLY = 17,
    ON = 20,
    OFF = 21,
    SETDEFAULT = 22,
    SAVESTATE = 23,
    RESTORESTATE = 24,
    TYPEID = 25,
    HELP = 31,
    WHATTYPE = 32,
    EDIT = 33,
    READ = 34,
    WRITE = 35,
    MONFIL = 36,
    LEARN = 37,
    EXEC = 38,
    QUIT = 39,
    LISTCOMMAND = 41,
    MAXNODES = 44,
    MAXOBJECTS = 45,
    WRITEHELP = 18,
    APPENDHELP = 19,
    INT = 26,
    NUMBER = 27,
    GROUPID = 28,
    IDENT = 29,
    DOLLAR = 30,
    TEXT = 40,
    ANY_STRING = 42,
    ENTER = 43,
    SEMICOLON = 46,
    COMMA = 47,
    BAR = 48,
    COLON = 49,
    LPAR = 50,
    RPAR = 51,
    LBRACE = 52,
    RBRACE = 53,
    LBRACK = 54,
    RBRACK = 55,
    OR = 56,
    AND = 57,
    NOT = 58,
    TIMES = 59,
    POWER = 60,
    X = 61,
    BECOMES = 62,
    PLUSAB = 63,
    RELOP = 64,
    ADDOP = 65,
    DIVOP = 66
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED

union YYSTYPE
{
#line 7 "parser.y" /* yacc.c:1909  */

	  short sub;
	  long val;
	  bigint* num;
	  symblst sym;
	  char* text;
	

#line 132 "parser.h" /* yacc.c:1909  */
};

typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSER_H_INCLUDED  */
