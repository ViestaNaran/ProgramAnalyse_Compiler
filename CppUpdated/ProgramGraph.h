//
//  ProgramGraph.hpp
//  ProgramAnalysis
//
//  Created by Sahas Arora on 11/27/20.
//  Copyright © 2020 Sahas Arora. All rights reserved.
//

#ifndef ProgramGraph_h
#define ProgramGraph_h

#include <stdio.h>
#include <vector>
#include <set>
#include <cstring>

#include "Edge.h"

class ProgramGraph {
private:
    const vector<Edge> edges;
//    void makeEdges(string statement, int qStart, int qEnd);
    void makeEdges(string statement, int qStart, int qEnd) {
        string seperator = " SEMICOLON ";
    
    }
public:
    vector<string> variables;
    int n;
    ProgramGraph(vector<Edge> edges, int n, vector<string> variables);
    ProgramGraph(string filename);
    vector<Edge> getEdges(int q);
    void print();
    
};

#endif /* ProgramGraph_h */
