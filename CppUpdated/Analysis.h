#ifndef Analysis_h
#define Analysis_h


#include <stdio.h>
#include "Graph/Edge.h"

class Analysis {
public:
    virtual void setToBottom(int q);
    virtual void setToInitial(int q);
    virtual bool satisfiesConstraint(Edge edge);
    virtual void update(Edge edge);
    
    virtual void printResults();
};


#endif /* Analysis_h */