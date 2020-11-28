//
//  Analysis.cpp
//  ProgramAnalysis
//
//  Created by Sahas Arora on 11/27/20.
//  Copyright © 2020 Sahas Arora. All rights reserved.
//

#include <stdio.h>
#include "Edge.h"

class Analysis {
public:
    virtual void setToBottom(int q);
    virtual void setToInitial(int q);
    virtual bool isSubset(Edge edge);
    virtual void update(Edge edge);
    
    virtual void printResults();
};
