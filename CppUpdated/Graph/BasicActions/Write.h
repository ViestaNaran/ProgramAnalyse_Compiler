
#ifndef Write_h
#define Write_h

#include <stdio.h>
#include <string>
#include "../Identifiers.h"
#include "Action.h"
#include "Arithmetics/Variable.h"


using namespace std;

class Write: public Action {

private:
    Arithmetic* a;

public:
    string getType();
    Identifiers getUsedVariables();
    Identifiers getDefinedVariables();
    string toString();
    Write(Arithmetic* a);
};

#endif /* Write_h */
