//
//  Edge.hpp
//  ProgramAnalysis
//
//  Created by Sahas Arora on 11/27/20.
//  Copyright © 2020 Sahas Arora. All rights reserved.
//

#ifndef Edge_h
#define Edge_h

#include <stdio.h>
#include <string>
#include "Action.h"

using namespace std;

class Edge {
private:
    int start;
    int end;
    Action *a;

public:
    Edge(int s, int e, Action *a);
    int getEnd();
    int getStart();
    Action * getAction();
    string toString();
};



#endif /* Edge_h */
