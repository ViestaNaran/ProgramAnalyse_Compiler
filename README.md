# ProgramAnalyse_Compiler

This project is the compiler and analysis functions for the course:

Program Analysis on DTU for the fall semester of 2020.

Links: 
1) Git Repository link to the full youtube video project (https://github.com/ajhalthor/interpreter) 
2) Run the following commands after you've downloaded YACC and LEX on your machines ->
    2.1) $yacc -d syntax2.y (This generates the y.tab.c header file that is used by the lex file)
    2.2) $lex semantics.l
    2.3) $cc lex.yy.c y.tab.c -o output (This generates the output file called "output")
    2.4) ./output < sample (This runs through our file called "sample", following the grammar that it has learnt from all the previous files)