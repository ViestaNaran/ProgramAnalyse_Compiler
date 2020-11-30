
#ifndef DeclareRecord_h
#define DeclareRecord_h

#include <stdio.h>
#include <string>
#include "../Identifiers.h"
#include "Action.h"
#include "Arithmetics/Record.h"


using namespace std;

class DeclareRecord: public Action {

private:
    string R;

public:
    string getType();
    Identifiers getUsedVariables();
    Identifiers getDefinedVariables();
    string toString();
    DeclareRecord(string R);
};

#endif /* DeclareRecord_h */
