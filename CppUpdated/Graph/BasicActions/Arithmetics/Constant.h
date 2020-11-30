#ifndef Constant_h
#define Constant_h

#include <stdio.h>
#include <string>
#include "../../Identifiers.h"
#include "../Arithmetic.h"

using namespace std;

class Constant : public Arithmetic {
    

public:
    Identifiers getUsedVariables();
    string toString();
    int value;
    Constant(int value);
};

#endif /* Constant_h */
