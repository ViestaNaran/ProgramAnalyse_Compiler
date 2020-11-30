#ifndef Record_h
#define Record_h

#include <stdio.h>

#include "../../Identifiers.h"
#include "../Arithmetic.h"

using namespace std;

class Record : public Arithmetic {
    
private:
    string field;

public:
    Identifiers getUsedVariables();
    string toString();
    string name;
    Record(string name, string field);
};

#endif /* Record_h */
