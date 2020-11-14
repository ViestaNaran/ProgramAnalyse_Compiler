%{
    #include <stdio.h>
    #include <string.h>


    #include "HeaderFiles/langFunctions.h"
    #include "HeaderFiles/validators.h"

    extern char Data_Type[50];

    extern void yyerror();
    extern int yylex();
    extern char* yytext;
    extern int yylineno;
    

    // void storeDataType(char*);
    int isDuplicate(char*, char*);
    void storeIdentifier(char*, char*);
    void DuplicateIdentifier(char*);
    // char* retrieveDataType();
    void clearBuffers();
    int isValidAssignment(char*);
    void AssignmentError(char*);
    char* extractIdentifier(char[]);

    //For Array Identifiers
    int numOfArrayIdentifiers=0;
    char extractedIdentifier[50][50];


%}


// %define parse.lac full
// %define parse.error verbose

%union {
    int intVal;
    char* dataType;
    char* strVal;
    char charVal;
}


%token COMMA COLON EQUALTO SEMI_COLON
%token OPEN_BRACKET CLOSE_BRACKET CURLY_BRACE_OPEN CURLY_BRACE_CLOSE SQUARE_BRACKET_OPEN SQUARE_BRACKET_CLOSE

%token <charVal> CHARACTER_VALUE
%token <intVal> INT_VALUE
%token <strVal> STRING_VALUE

%token <intVal> INT
%token <strVal> STRING
%token <dataType> DATA_TYPE
%token <strVal> IDENTIFIER  ARRAY_IDENTIFIER




%type <strVal> DECLARATION
%type <strVal> EXPRESSION

%%

DECLARATION :    EXPRESSION SEMI_COLON                { clearBuffers(); }
            |    DECLARATION EXPRESSION SEMI_COLON    { clearBuffers(); }    
            
            |    error '>'              { /* '>' stops the execution */}
    ;

EXPRESSION :    DATA_TYPE   IDENTIFIER                {
                                                         if(!isDuplicate($2, retrieveDataType())) {
                                                             storeIdentifier($2, retrieveDataType());
                                                             storeDataType($1);
                                                         } else {
                                                             DuplicateIdentifierError($2);
                                                         }
                                                        }
            |   EXPRESSION COLON EQUALTO NUMBER        {;}

            |   IDENTIFIER EQUALTO NUMBER               {;}

            |   EXPRESSION COMMA IDENTIFIER           
                                                        {
                                                            if(!isDuplicate($3, retrieveDataType())) {
                                                                storeIdentifier($3, retrieveDataType());
                                                            } else {
                                                                DuplicateIdentifierError($3);
                                                            }
                                                        }


            |   DATA_TYPE ARRAY_IDENTIFIER             
                                                        {
                                                            strcpy(extractedIdentifier[numOfArrayIdentifiers], extractIdentifier($2));
                                                            if(!isDuplicate(extractedIdentifier[numOfArrayIdentifiers], retrieveDataType())) {
                                                                storeIdentifier(extractedIdentifier[numOfArrayIdentifiers], retrieveDataType());
                                                                storeDataType($1);
                                                            } else {
                                                                DuplicateIdentifierError(extractedIdentifier[numOfArrayIdentifiers]);
                                                            }
                                                            numOfArrayIdentifiers+=1;
                                                        }


            |   EXPRESSION  COLON   EQUALTO SQUARE_BRACKET_OPEN PARAMETERS  SQUARE_BRACKET_CLOSE 

            |   EXPRESSION  COMMA ARRAY_IDENTIFIER      {
                                                            strcpy(extractedIdentifier[numOfArrayIdentifiers], extractIdentifier($3));
                                                            if(!isDuplicate(extractedIdentifier[numOfArrayIdentifiers], retrieveDataType())) {
                                                                storeIdentifier(extractedIdentifier[numOfArrayIdentifiers], retrieveDataType());
                                                            } else {
                                                                DuplicateIdentifierError(extractedIdentifier[numOfArrayIdentifiers]);
                                                            }
                                                            numOfArrayIdentifiers+=1;
                                                        }
            |   error   '>'                             {/* no need to call yyerror cuz of line 1570 of y.tab.c*/}
    ;


NUMBER  :   INT_VALUE       {if(!isValidAssignment("int")) { AssignmentError(itoa($1));}}
    ;


PARAMETERS  :   NUMBER
            |   PARAMETERS  COMMA   NUMBER
            |   NUMBER EQUALTO NUMBER       { yyerror("Single equal sign implies check, colon followed by equal signigies assignment");}
            |   error '>'
    ;




%%

int main() {

    yyparse();
    printf("No Errors at all! \n");
    return 0;
}
