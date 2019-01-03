%{
// #define YYSTYPE type
#include <stdio.h>
#include <string.h>
#include "chspc.tab.h"
int check_type();
//extern char *yylval;
%}
%option nounput yylineno

D			  [0-9]
L			  [a-zA-Z_]
H			  [a-fA-F0-9]
E			  [Ee][+-]?{D}+
FS			(f|F|l|L)
IS			(u|U|l|L)*

Keywords        "Queen"|"Stalemate"
Ret             Return
ARITME_OP       ("+"|"-"|"*"|"/"|"%")
AS_ART_OP       ([+*/%-]=)
DEC             "++"                                    
INC             "--"            
ID              [_a-zA-Z][_a-zA-Z0-9]*                        
ID_CL           [a-zA-Z][_a-zA-Z0-9]*                        
%%
Int                                     { yylval.attr.type="int"; return INT; }
Double                                  { yylval.attr.type="double"; return DOUBLE; }
String                                  { yylval.attr.type="string"; return STRING; }
Char                                    { yylval.attr.type="char"; return CHAR; }
Float                                   { yylval.attr.type="float"; return FLOAT; }
Boolean                                 { yylval.attr.type="boolean"; return BOOLEAN; }
{Keywords}                              return CTRL_KEYWORD; 
("Public"|"Private")                    { yylval.attr.scope = yytext; yylval.attr.num = 1; return ACCESS_MOD; }
End                                     return END;
Begin                                   return BEGIN_;
Check                                   return CHECK;
Tie                                     return TIE;
Checkmate                               return CHECKMATE;
Move                                    return METHOD_KW;
Void                                    { yylval.attr.type="void"; return VOID; }
Round                                   { yylval.attr.type=yytext; yylval.attr.num = 2; return CLASS; }
{Ret}                                   return RETURN;
New                                     return NEW_KW;
Main                                    return MAIN;
Pawn                                    return PAWN;
Bishop                                  return BISHOP;
Knight                                  return KNIGHT;
Else                                    return ELSE;
King                                    return KING;
Rook                                    return ROOK;
If                                      return IF;
"!!".*\n                                ;
¡¿(\n|.)*?"?!"                          ;
"auto"			{  return AUTO; }
"case"			{  return CASE; }
"const"			{  return CONST; }
"continue"		{  return CONTINUE; }
"default"		{  return DEFAULT; }
"do"			{  return DO; }
"else"			{  return ELSE; }
"enum"			{  return ENUM; }
"extern"		{  return EXTERN; }
"for"			{  return FOR; }
"goto"			{  return GOTO; }
"Long"			{  return LONG; }
"register"		{  return REGISTER; }
"Short"			{  return SHORT; }
"signed"		{  return SIGNED; }
"sizeof"		{  return SIZEOF; }
"static"		{  return STATIC; }
"struct"		{  return STRUCT; }
"switch"		{  return SWITCH; }
"typedef"		{  return TYPEDEF; }
"union"			{  return UNION; }
"unsigned"		{  return UNSIGNED; }
"volatile"		{  return VOLATILE; }
"while"			{  return WHILE; }

{L}({L}|{D})*	{  return check_type(); }

0[xX]{H}+{IS}?	    { yylval.attr.type="int"; return CONSTANT; }
0{D}+{IS}?		    { yylval.attr.type="int"; return CONSTANT; }
{D}+{IS}?		    { yylval.attr.type="int"; return CONSTANT; }
L?'(\\.|[^\\'])+'	{ yylval.attr.type="char"; return CONSTANT; }

{D}+{E}{FS}?		    {  return CONSTANT; }
{D}*"."{D}+({E})?{FS}?	{ yylval.attr.type="float"; return CONSTANT; }
{D}+"."{D}*({E})?{FS}?	{ yylval.attr.type="float"; return CONSTANT; }

L?\"(\\.|[^\\"])*\"	{ yylval.attr.type="string"; return STRING_LITERAL; }

"..."			{  return ELLIPSIS; }
">>="			{  return RIGHT_ASSIGN; }
"<<="			{  return LEFT_ASSIGN; }
"+="			{  return ADD_ASSIGN; }
"-="			{  return SUB_ASSIGN; }
"*="			{  return MUL_ASSIGN; }
"/="			{  return DIV_ASSIGN; }
"%="			{  return MOD_ASSIGN; }
"&="			{  return AND_ASSIGN; }
"^="			{  return XOR_ASSIGN; }
"|="			{  return OR_ASSIGN; }
">>"			{  return RIGHT_OP; }
"<<"			{  return LEFT_OP; }
"++"			{  return INC_OP; }
"--"			{  return DEC_OP; }
"->"			{  return PTR_OP; }
"&&"			{  return AND_OP; }
"||"			{  return OR_OP; }
"<="			{  return LE_OP; }
">="			{  return GE_OP; }
"=="			{  return EQ_OP; }
"!="			{  return NE_OP; }
";"			      return ';';
("{"|"<%")		return '{';
("}"|"%>")		return '}';
","			      return ',';
":"			      return ':';
"="			      return '=';
"("			      return '(';
")"			      return ')';
("["|"<:")		return '[';
("]"|":>")		return ']';
"."			      return '.';
"&"			      return '&';
"!"			      return '!';
"~"			      return '~';
"-"			      return '-';
"+"			      return '+';
"*"			      return '*';
"/"			      return '/';
"%"			      return '%';
"<"			      return '<';
">"			      return '>';
"^"			      return '^';
"|"			      return '|';
"?"			      return '?';

[ \t\v\n\f]	{  }
.           printf("Unexpected character\n");
%%

int yywrap(void){
    return 1;
}

int check_type(){
  return IDENTIFIER;
}