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

class Operation : public Arithmetic {
private:
    const string operation;
    const Arithmetic arith_1;
    const Arithmetic arith_2;
    
    Operation(string operation, Arithmetic a1, Arithmetic a2);
    vector<string> fv();
    string toString();
};

#endif /* Operation_h */
