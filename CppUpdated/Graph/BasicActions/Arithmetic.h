//
//  Arithmetic.hpp
//  ProgramAnalysis
//
//  Created by Sahas Arora on 11/27/20.
//  Copyright © 2020 Sahas Arora. All rights reserved.
//

#ifndef Arithmetic_h
#define Arithmetic_h

#include <stdio.h>

#include "../Identifiers.h"

using namespace std;

class Arithmetic {
    
public:
    virtual Identifiers getUsedVariables()=0;
    virtual string toString()=0;
};

#endif /* Arithmetic_h */
