#ifndef ReachingDefinitions_h
#define ReachingDefinitions_h


#include <stdio.h>
#include "../Graph/Edge.h"
#include "../Analysis.h"
#include "RDTriple.h"

class ReachingDefinitions : public Analysis {
public:
    ReachingDefinitions();
    void setToBottom(int q);
    void setToInitial(int q);
    bool satisfiesConstraint(Edge edge);
    void update(Edge edge);
    
    void printResults();

private: 
    vector<vector<RDTriple>> AA;
};


#endif /* ReachingDefinitions_h */