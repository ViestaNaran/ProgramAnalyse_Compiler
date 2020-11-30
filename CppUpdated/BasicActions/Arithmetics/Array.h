#ifndef Array_h
#define Array_h

#include <stdio.h>

#include "../../Identifiers.h"
#include "Arithmetic.h"

using namespace std;

class Array : public Arithmetic {
    
private:
    Arithmetic* index;

public:
    Identifiers getUsedVariables();
    Identifiers getUsedVariablesInIndex();
    string toString();
    string name;
    Array(string name, Arithmetic* index);
};

#endif /* Array_h */
