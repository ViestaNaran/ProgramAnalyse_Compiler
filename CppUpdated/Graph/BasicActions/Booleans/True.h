
#ifndef True_h
#define True_h

#include <stdio.h>
#include <string>
#include "../Boolean.h"
#include "../../Identifiers.h"

class True : public Boolean {

public:
    Identifiers getUsedVariables();
    string toString();
    True();
    
};

#endif /* True_h */
