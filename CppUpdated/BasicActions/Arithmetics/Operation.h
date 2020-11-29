//
//  Operation.h
//  ProgramAnalysis
//
//  Created by Sahas Arora on 11/27/20.
//  Copyright © 2020 Sahas Arora. All rights reserved.
//

#ifndef Operation_h
#define Operation_h

#include <stdio.h>
#include <string>
#include <set>
#include "Arithmetic.h"
#include "../../Identifiers.h"

class Operation : public Arithmetic {
private:
    string op;  /* can be "-", "+" and maybe "*" or "/" */
    Arithmetic a1;
    Arithmetic a2;
    
public:
    Operation(string op, Arithmetic a1, Arithmetic a2);
    Identifiers getUsedVariables();
    string toString();
};

#endif /* Operation_h */
