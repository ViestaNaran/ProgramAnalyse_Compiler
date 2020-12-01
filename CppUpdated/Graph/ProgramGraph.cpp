//
//  ProgramGraph.cpp
//  ProgramAnalysis
//
//  Created by Sahas Arora on 11/27/20.
//  Copyright © 2020 Sahas Arora. All rights reserved.
//

#include "ProgramGraph.h"

ProgramGraph::ProgramGraph(vector<Edge> edges, int n, Identifiers* var) {
    this->var = var;
    this->edges = edges;
    this->n = n;
}

vector<Edge> ProgramGraph::getEdges(int q) {
    vector<Edge> qEdges;
    auto pred = [](Edge e, int q) {return e.getStart()== q;};
    copy_if(this->edges.begin(), this->edges.end(), std::back_inserter(qEdges), pred);
    return qEdges;
}


void ProgramGraph::print() {
    sortEdges();
    for (auto it = begin(this->edges); it != end(this->edges); ++it) {
        cout << it->toString() << endl;
}
}

void ProgramGraph::sortEdges(){
    sort(this->edges.begin(), this->edges.end(),[](Edge e1, Edge e2){
        return e1.getStart() < e2.getStart();
    });
}