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
#include "Identifiers.h"

using namespace std;

class Action {

public:
    virtual string getType()=0;
    virtual Identifiers getUsedVariables()=0;
    virtual Identifiers getDefinedVariables()=0;
    virtual string toString()=0;
};

#endif /* Action_h */
