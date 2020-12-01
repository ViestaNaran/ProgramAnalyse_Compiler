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
#include <iostream>
#include <algorithm>
#include <vector>
#include <cstring>

#include "Edge.h"
#include "Identifiers.h"

class ProgramGraph {
private:
    vector<Edge> edges;
    Identifiers* var;
    void sortEdges();
public:
    int n;
    ProgramGraph(vector<Edge> edges, int n, Identifiers* var);
    vector<Edge> getEdges(int q);
    void print();

};

#endif /* ProgramGraph_h */
