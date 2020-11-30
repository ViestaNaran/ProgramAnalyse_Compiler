
#ifndef Skip_h
#define Skip_h

#include <stdio.h>
#include <string>
#include "../Identifiers.h"
#include "Action.h"
#include "Arithmetics/Variable.h"


using namespace std;

class Skip: public Action {

public:
    string getType();
    Identifiers getUsedVariables();
    Identifiers getDefinedVariables();
    string toString();
    Skip();
};

#endif /* Skip_h */
