#ifndef And_h
#define And_h

#include <stdio.h>
#include <string>
#include "Boolean.h"
#include "../../Identifiers.h"

class And : public Boolean {

public:
    Identifiers getUsedVariables();
    string toString();
    And(Boolean b1, Boolean b2);

private:
    Boolean b1;    
    Boolean b2;    
};

#endif /* And_h */
