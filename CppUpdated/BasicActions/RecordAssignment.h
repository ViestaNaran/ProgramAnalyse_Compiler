
#ifndef RecordAssignment_h
#define RecordAssignment_h

#include <stdio.h>
#include <string>
#include "../Identifiers.h"
#include "Action.h"
#include "Arithmetics/Arithmetic.h"
#include "Arithmetics/Record.h"


using namespace std;

class RecordAssignment: public Action {

private:
    Record R;
    string field;
    Arithmetic a;

public:
    string getType();
    Identifiers getUsedVariables();
    Identifiers getDefinedVariables();
    string toString();
    RecordAssignment(Record A, string field, Arithmetic a);
};

#endif /* RecordAssignment_h */
