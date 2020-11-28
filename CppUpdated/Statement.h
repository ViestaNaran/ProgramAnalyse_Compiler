//
//  Statement.hpp
//  ProgramAnalysis
//
//  Created by Sahas Arora on 11/27/20.
//  Copyright © 2020 Sahas Arora. All rights reserved.
//

#ifndef Statement_h
#define Statement_h

#include <stdio.h>
#include <string>

using namespace std;

class Statement {
private:
    const string type;
    // Arithmetic a1;
    // Arithmetic a2;
    // Variable x;
    
public:
    Statement(string t); //Add arithmetics and variable to the arguments
    Statement(string t, int x); //Here int x is arithmetic x
    string getType();
    vector<string> freeVariablesRight();
    vector<string> freeVariablesLeft();
    string toString();
};

#endif /* Statement_h */
