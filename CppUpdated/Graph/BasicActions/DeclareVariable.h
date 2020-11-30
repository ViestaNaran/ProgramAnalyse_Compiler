
#ifndef DeclareVariable_h
#define DeclareVariable_h

#include <stdio.h>
#include <string>
#include "../Identifiers.h"
#include "../Action.h"
#include "Arithmetics/Variable.h"


using namespace std;

class DeclareVariable: public Action {

private:
    Variable* x;

public:
    string getType();
    Identifiers getUsedVariables();
    Identifiers getDefinedVariables();
    string toString();
    DeclareVariable(Variable* x);
};

#endif /* DeclareVariable_h */
