
#ifndef DeclareArray_h
#define DeclareArray_h

#include <stdio.h>
#include <string>
#include "../Identifiers.h"
#include "Action.h"
#include "Arithmetics/Array.h"


using namespace std;

class DeclareArray: public Action {

private:
    string A;

public:
    string getType();
    Identifiers getUsedVariables();
    Identifiers getDefinedVariables();
    string toString();
    DeclareArray(string A);
};

#endif /* DeclareArray_h */
