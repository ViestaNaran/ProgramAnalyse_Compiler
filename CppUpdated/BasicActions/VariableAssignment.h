
#ifndef VariableAssignment_h
#define VariableAssignment_h

#include <stdio.h>
#include <string>
#include "../Identifiers.h"
#include "Action.h"
#include "Arithmetics/Arithmetic.h"
#include "Arithmetics/Variable.h"


using namespace std;

class VariableAssignment: public Action {

private:
    Variable x;
    Arithmetic a;

public:
    string getType();
    Identifiers getUsedVariables();
    Identifiers getDefinedVariables();
    string toString();
    VariableAssignment(Variable x, Arithmetic a);
};

#endif /* VariableAssignment_h */
