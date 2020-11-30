#ifndef Variable_h
#define Variable_h

#include <stdio.h>

#include "../../Identifiers.h"
#include "../Arithmetic.h"

using namespace std;

class Variable : public Arithmetic {
    

public:
    Identifiers getUsedVariables();
    string toString();
    string name;
    Variable(string name);

};

#endif /* Variable_h */
