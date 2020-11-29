//
//  Statement.hpp
//  ProgramAnalysis
//
//  Created by Sahas Arora on 11/27/20.
//  Copyright © 2020 Sahas Arora. All rights reserved.
//

#ifndef Action_h
#define Action_h

#include <stdio.h>
#include <string>
#include "../Identifiers.h"

using namespace std;

class Action {

public:
    virtual string getType();
    virtual Identifiers getUsedVariables();
    virtual Identifiers getDefinedVariables();
    virtual string toString();
};

#endif /* Action_h */
