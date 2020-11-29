
#ifndef Comparison_h
#define Comparison_h

#include <stdio.h>
#include <string>
#include "Boolean.h"
#include "../Arithmetics/Arithmetic.h"
#include "../../Identifiers.h"

class Comparison : public Boolean {

public:
    Identifiers getUsedVariables();
    string toString();
    Comparison(Arithmetic a1, Arithmetic a2, string operation);

private:
    Arithmetic a1;    
    Arithmetic a2;    
    string operation; /* can be "==" ">=" or "<=" */
};

#endif /* Comparison_h */
