%{/****************************************************************************
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
%}
%union semrec
{
    struct{
        char* val;
        char* name;
        char* type;
        char* scope;
        int num;
    } attr;
}
/*===============================================================================
                                    TOKENS
===============================================================================*/
%start program
%token <attr> ID_CLASS                              /* [;:,.]               */
%token <attr> LOGIC_OP COMP_OP ASSIGN_OP CLASS MAIN                             /* [<,>,>=, Round] etc. */
%token <attr> RIGHT_ASSIGN LEFT_ASSIGN ADD_ASSIGN SUB_ASSIGN MUL_ASSIGN DIV_ASSIGN
%token <attr> MOD_ASSIGN AND_ASSIGN XOR_ASSIGN OR_ASSIGN RIGHT_OP LEFT_OP
%token <attr> INC_OP DEC_OP PTR_OP AND_OP OR_OP LE_OP GE_OP EQ_OP NE_OP
%token <attr> IDENTIFIER METHOD_KW NEW_KW CTRL_KEYWORD RETURN                   /* [New, Move, ..] etc. */
%token <attr> STRING_LITERAL CONSTANT            /* [0,'a',true] = data  */
%token <attr> END BEGIN_     /* <(), [], End, Begin> */
%token <attr> KING ROOK PAWN BISHOP KNIGHT CHECK CHECKMATE TIE ELSE IF          /* Chess Keywords       */
%token <attr> ACCESS_MOD CONS_VARS_SP                                           /* [Public, This|Null ] */
%token <attr> INT DOUBLE FLOAT BOOLEAN STRING CHAR VOID                         /* [Int, Double,..] etc.*/
%token <attr> AUTO CASE CONST CONTINUE DEFAULT DO ENUM EXTERN FOR GOTO LONG
%token <attr> REGISTER SHORT SIGNED SIZEOF STATIC STRUCT SWITCH TYPEDEF UNION
%token <attr> UNSIGNED VOLATILE WHILE ELLIPSIS
/*===============================================================================
                                OPERATOR PRECEDENCE
===============================================================================*/
%left '+' '-'            /* [+,-]                */
%left '*' '/' '%'        /* [*,/,%]              */
/*===============================================================================
                                GRAMMAR RULES
===============================================================================*/
%%
program: class 
        ;
class:  access_mod CLASS IDENTIFIER
        { printf("%s-%d-%d\n", $<attr.scope>1, $<attr.num>2, $<attr.num>3); }
        body 
        END 
        ':' 
        CLASS 
        ;
call_to_func:   IDENTIFIER '.' IDENTIFIER '(' params ')' { $<attr.type>$ = "undefined"; printf("%s | %s\n", $<attr.name>1 ,$<attr.name>3); }
        ;
access_mod: /* Nothing */{ $<attr.scope>$ = "Public"; }
            | ACCESS_MOD { $<attr.scope>$ = $<attr.scope>1; }
            { /*printf("Access Mod: %s\n", $<attr.scope>$); */}
        ;
body:       translation_unit
        ;
translation_unit:     external_declaration
	                | translation_unit external_declaration
                	;
external_declaration: function_definition
	                | declaration
	                ;
function_definition:  declaration_specifiers declarator declaration_list compound_statement
	                | declaration_specifiers declarator compound_statement
	                | declarator declaration_list compound_statement
	                | declarator compound_statement
	;
def_main: BEGIN_ ':' MAIN '(' params ')' m_body CHECKMATE
        ;
params:     /*Nothing*/
        |   expression
        ;
/* Definición de variables */
def_vars: def_tipo 
        ;
def_tipo:       INT IDENTIFIER end_of_int_def { /*printf("%s %s = %s|\n", $<attr.type>1, $<attr.name>2, $<attr.val>3); */}
            |   STRING IDENTIFIER end_of_str_def
            |   DOUBLE IDENTIFIER end_of_dou_def
            |   FLOAT IDENTIFIER end_of_dou_def
            |   CHAR IDENTIFIER end_of_cha_def
            |   BOOLEAN IDENTIFIER end_of_bool_def
            |   IDENTIFIER is_def_or_assign
            ;
end_of_int_def:     ASSIGN_OP CONSTANT ';' {$<attr.val>$ = $<attr.val>2;}
                |   end_of_any_def_id {$<attr.val>$ = "undefined";}
                |   end_of_call_funct {$<attr.val>$ = "undefined";}
                |   ';' {$<attr.val>$ = "0";}
                ;
end_of_str_def:     ASSIGN_OP STRING_LITERAL ';'
                |   end_of_any_def_id
                |   end_of_call_funct
                |   ';'
                ;
end_of_dou_def:     ASSIGN_OP CONSTANT ';'
                |   end_of_any_def_id
                |   end_of_call_funct
                |   ';'
                ;
end_of_cha_def:     ASSIGN_OP CONSTANT ';'
                |   end_of_any_def_id
                |   end_of_call_funct
                |   ';'
                ;
end_of_bool_def:    ASSIGN_OP bool_types ';'
                |   end_of_any_def_id
                |   end_of_call_funct
                |   ';'
                ;
end_of_user_def:    ASSIGN_OP NEW_KW IDENTIFIER '(' params ')' ';'
                |   ';'
                ;
bool_types:         CONSTANT { $<attr.type>$ = $<attr.type>1; }
                ;
end_of_any_def_id:  ASSIGN_OP IDENTIFIER ';'
                ;
end_of_call_funct:  ASSIGN_OP call_to_func ';'
                ;
/* Definición de métodos*/
def_methods:    access_mod METHOD_KW IDENTIFIER '(' params_def ')' ':' m_type m_body END ':' METHOD_KW
        {
            // printf("Method Name: %s\n",$<attr.name>3);
            if(strcmp($<attr.type>8,$<attr.type>9)==0){
                // printf("El tipo devuelto es %s y esta correcto\n",$<attr.type>9);
            }else{
                // printf("Error, no se puede convertir %s a %s de forma automatica\n",$<attr.type>9,$<attr.type>8);
            }
        }
            ;
params_def:     type ':' IDENTIFIER params_def
            |   ',' type ':' IDENTIFIER params_def
            |
            ;
type:           data_type { $<attr.type>$ = $<attr.type>1; }
            |   IDENTIFIER { $<attr.type>$ = "undefined"; }
            ;
data_type:      INT { $<attr.type>$ = $<attr.type>1; }
            |   STRING { $<attr.type>$ = $<attr.type>1; }
            |   DOUBLE { $<attr.type>$ = $<attr.type>1; }
            |   FLOAT { $<attr.type>$ = $<attr.type>1; }
            |   CHAR { $<attr.type>$ = $<attr.type>1; }
            |   BOOLEAN { $<attr.type>$ = $<attr.type>1; }
            ;
m_type:         type { $<attr.type>$ = $<attr.type>1; }
            |   VOID { $<attr.type>$ = $<attr.type>1; }
            ;
m_body:         def_vars m_body {}
            |   assign_vars m_body
            |   def_conditionals m_body {}
            |   def_loops m_body
            |   call_to_func m_body
            |   return_ins {$<attr.type>$ = $<attr.type>1; }
            ;
assign_vars:    IDENTIFIER is_def_or_assign
            ;
is_def_or_assign:   op_assigment expression ';'
            |   IDENTIFIER end_of_user_def
            |   inc_dec_op ';'
            ;
op_assigment:   ASSIGN_OP 
            |   aritme_op_or_assign
            ;

assigned_value: assing_terminal aritme_op_or_assign assigned_value
            |   assing_terminal
            ;
aritme_op_or_assign: inc_dec_op art_as
            |   '*' art_as
            |   '/' art_as
            |   '%' art_as
            ;
inc_dec_op:     '+' inc
            |   '-' dec
            ;
art_as:         ASSIGN_OP
            |   /* Nothing */
            ;
inc:        /* Nothing */
            |   '+'   
            ;
dec:        /* Nothing */
            |   '-'
            ;
const_data:     CONSTANT { $<attr.type>$ = $<attr.type>1; }
            |   STRING_LITERAL { $<attr.type>$ = $<attr.type>1; }
            ;
assing_terminal:    IDENTIFIER
            |   const_data
            |   call_to_func
            ;
return_ins:     RETURN expression ';' { $<attr.type>$ = $<attr.type>2; }
            |   RETURN call_to_func ';' { $<attr.type>$ = $<attr.type>2; }
            |   /* Nothing */ { $<attr.type>$ = "void"; }
            ;
expression:     term '+' expression { $<attr.type>$ =  (strcmp($<attr.type>1,$<attr.type>3) == 0) ? $<attr.type>1 : "none"; }
            |   term '-' expression { $<attr.type>$ =  (strcmp($<attr.type>1,$<attr.type>3) == 0) ? $<attr.type>1 : "none"; }
            |   term { $<attr.type>$ = $<attr.type>1; }
            ;
term:           factor '*' term { $<attr.type>$ =  (strcmp($<attr.type>1,$<attr.type>3) == 0) ? $<attr.type>1 : "none"; }
            |   factor '/' term { $<attr.type>$ =  (strcmp($<attr.type>1,$<attr.type>3) == 0) ? $<attr.type>1 : "none"; }
            |   factor { $<attr.type>$ = $<attr.type>1; }
            ;
factor:         '(' expression ')' { $<attr.type>$ = $<attr.type>2; }
            |   IDENTIFIER { $<attr.type>$ = $<attr.type>1; }
            |   const_data { $<attr.type>$ = $<attr.type>1; }
            |   call_to_func { $<attr.type>$ = $<attr.type>1; }
            ;
/*Definición de estructuras*/
/* Bifurcación */
def_conditionals:   BEGIN_ ':' conditional CHECK
            ;
conditional:    pawn
            |   bishop
            |   knight
            ;
condition:      factor comp_op condition
            |   factor LOGIC_OP condition
            |   factor
            ;
comp_op:        '>' 
            |   '<'
            |   LE_OP
            |   GE_OP
            |   EQ_OP
            |   NE_OP
            ;
logic_op:       '!'
            |   OR_OP
            |   AND_OP
            ;
/* Comentado =================
fact:           IDENTIFIER
            |   CONSTANT
            |   call_to_func
            ;
============================== */
conditional_body:   def_vars conditional_body
            |   nested_conditional_def conditional_body
            |   nested_loop_def conditional_body
            |   assign_vars conditional_body
            |   call_to_func ';' conditional_body
            |   return_ins
            ;
nested_conditional_def: BEGIN_ ':' conditional TIE
            ;
pawn:           PAWN '(' condition ')' conditional_body
            ;
bishop:         BISHOP '(' condition ')' conditional_body ELSE conditional_body
            ;
knight:         KNIGHT '(' condition ')' conditional_body else_if else
            ;
else:           ELSE conditional_body
            |
            ;
else_if:        ELSE IF '(' condition ')' conditional_body else_if
            |
            ;
/* Repetición o ciclos */
def_loops:      BEGIN_ ':' loop CHECK
            ;
loop:           king
            |   rook
            ;
nested_loop_def:    BEGIN_ ':' loop TIE
            ;
king:           KING '(' condition ')' conditional_body
            ;
rook:           ROOK '(' condition ')' conditional_body
            ;
%%

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