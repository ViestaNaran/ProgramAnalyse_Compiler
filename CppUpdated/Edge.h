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

using namespace std;

class Edge {
private:
    int start;
    int end;
    //Statement statement;
    
public:
    Edge(int s, int e);
    int getEnd();
    int getStart();
    int getStatement();
    string toString();
};



#endif /* Edge_h */
