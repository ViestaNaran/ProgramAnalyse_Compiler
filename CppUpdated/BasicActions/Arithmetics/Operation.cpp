//
//  Operation.cpp
//  ProgramAnalysis
//
//  Created by Sahas Arora on 11/27/20.
//  Copyright © 2020 Sahas Arora. All rights reserved.
//

#include "Operation.h"

Operation::Operation(string operation, Arithmetic a1, Arithmetic a2) {
    this->op = operation;
    this->a1 = a1;
    this->a2 = a2;
}

Identifiers Operation::getUsedVariables() {
    return a1.getUsedVariables().merge(a2.getUsedVariables());
}

string Operation::toString() {
    return a1.toString() + op + a2.toString();
}