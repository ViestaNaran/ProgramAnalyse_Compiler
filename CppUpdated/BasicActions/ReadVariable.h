
#ifndef ReadVariable_h
#define ReadVariable_h

#include <stdio.h>
#include <string>
#include "../Identifiers.h"
#include "Action.h"
#include "Arithmetics/Variable.h"


using namespace std;

class ReadVariable: public Action {

private:
    Variable x;

public:
    string getType();
    Identifiers getUsedVariables();
    Identifiers getDefinedVariables();
    string toString();
    ReadVariable(Variable x);
};

#endif /* VariableAssignment_h */
