
#ifndef Boolean_h
#define Boolean_h

#include <stdio.h>
#include <string>
#include "Arithmetic.h"
#include "../Action.h"
#include "../Identifiers.h"

class Boolean : public Action {

public:
    string getType();
    virtual Identifiers getUsedVariables();
    Identifiers getDefinedVariables();
    virtual string toString();
};

#endif /* Boolean_h */
