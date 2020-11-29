
#ifndef ReadArray_h
#define ReadArray_h

#include <stdio.h>
#include <string>
#include "../Identifiers.h"
#include "Action.h"
#include "Arithmetics/Array.h"


using namespace std;

class ReadArray: public Action {

private:
    Array A;

public:
    string getType();
    Identifiers getUsedVariables();
    Identifiers getDefinedVariables();
    string toString();
    ReadArray(Array A);
};

#endif /* VariableAssignment_h */
