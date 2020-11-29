
#ifndef ArrayAssignment_h
#define ArrayAssignment_h

#include <stdio.h>
#include <string>
#include "../Identifiers.h"
#include "Action.h"
#include "Arithmetics/Arithmetic.h"
#include "Arithmetics/Array.h"


using namespace std;

class ArrayAssignment: public Action {

private:
    Array A;
    Arithmetic a;

public:
    string getType();
    Identifiers getUsedVariables();
    Identifiers getDefinedVariables();
    string toString();
    ArrayAssignment(Array A, Arithmetic a);
};

#endif /* ArrayAssignment_h */
