#ifndef ReachingDefinitions_h
#define ReachingDefinitions_h


#include <stdio.h>
#include "../Graph/Edge.h"
#include "../Analysis.h"

class ReachingDefinitions : public Analysis {
public:
    void setToBottom(int q);
    void setToInitial(int q);
    bool satisfiesConstraint(Edge edge);
    void update(Edge edge);
    
    void printResults();
};


#endif /* ReachingDefinitions_h */