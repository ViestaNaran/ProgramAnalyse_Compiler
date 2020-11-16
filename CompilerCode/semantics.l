%{
    #include <string.h>
    #include <stdlib.h>
    #include "y.tab.h" //This defines the list of tokens that we mention here
    void extern yyerror(char*);
    void InvalidToken();
%}

whitespace      [ \t\r\v\f]
linefeed        \n


%%
"void"      |
"char"      |      
"int"       | 
"char*"     |
"int*"              { yylval.dataType = strdup(yytext);return DATA_TYPE; }

"="                 { return EQUALTO; }
":"                 { return COLON; }
";"                 { return SEMI_COLON; }
","                 { return COMMA; }
"("                 { return OPEN_BRACKET; }
")"                 { return CLOSE_BRACKET; }
"{"                 { return CURLY_BRACE_OPEN; }
"}"                 { return CURLY_BRACE_CLOSE; }
"["                 { return SQUARE_BRACKET_OPEN; }
"]"                 { return SQUARE_BRACKET_CLOSE; }


[\'][a-zA-Z][\']    {yylval.charVal = yytext[1];  return CHARACTER_VALUE;}
[-+]?[0-9]+         {yylval.intVal = atoi(yytext);  return INT_VALUE;}


[a-zA-Z][_a-zA-Z0-9]*(\[[0-9]+\])+      {yylval.strVal = strdup(yytext);  return ARRAY_IDENTIFIER;}
[a-zA-Z][_a-zA-Z0-9]*                   {yylval.dataType = strdup(yytext);  return IDENTIFIER; }

\"(\\.|[^"])*\"                         {yylval.strVal = strdup(yytext);  return STRING_VALUE; }


{linefeed}                              {yylineno++;}
{whitespace}                            ;
.                                       {InvalidToken();}

%%

//This function denotes the end of the file
int yywrap(void) { 
    return 1;
}

void yyerror(char *s) {
    fprintf(stderr, "\nError on Line Number %d : \n %s\n", yylineno, s);
    exit(0);
}

void InvalidToken() {
    printf("Error on Line Number %d : \n Invalid Token %s\n", yylineno, yytext);
    exit(0);
}



