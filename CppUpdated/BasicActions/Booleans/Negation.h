
#ifndef Negation_h
#define Negation_h

#include <stdio.h>
#include <string>
#include "Boolean.h"
#include "../../Identifiers.h"

class Negation : public Boolean {

public:
    Identifiers getUsedVariables();
    string toString();
    Negation(Boolean boolean);

private:
    Boolean boolean;    
};

#endif /* Negation_h */
