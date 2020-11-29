
#ifndef Boolean_h
#define Boolean_h

#include <stdio.h>
#include <string>
#include "../Arithmetics/Arithmetic.h"
#include "../../Identifiers.h"

class Boolean : public Arithmetic {

public:
    virtual Identifiers getUsedVariables();
    virtual string toString();
    string getActionType();
};

#endif /* Boolean_h */
