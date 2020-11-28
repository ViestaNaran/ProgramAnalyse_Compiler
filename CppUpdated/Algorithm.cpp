//
//  Algorithm.cpp
//  ProgramAnalysis
//
//  Created by Sahas Arora on 11/27/20.
//  Copyright © 2020 Sahas Arora. All rights reserved.
//

#include <stdio.h>
#include "Analysis.cpp"

#include "ProgramGraph.h"


class Algorithm {
public:
    virtual void analyse(Analysis analysis, ProgramGraph programGraph);
};
