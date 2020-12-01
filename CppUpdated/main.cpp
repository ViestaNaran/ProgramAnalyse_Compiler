//
//  main.cpp
//  ProgramAnalysis
//
//  Created by Sahas Arora on 11/27/20.
//  Copyright © 2020 Sahas Arora. All rights reserved.
//

#include <iostream>
#include "BasicActions/Action.h"
#include "BasicActions/Arithmetics/Variable.h"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Variable X = Variable("X");
    std::cout << X.name << std::endl;
    return 0;
}
