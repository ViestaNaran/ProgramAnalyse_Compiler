
#ifndef Algorithm_h
#define Algorithm_h


#include <stdio.h>
#include "Analysis.h"

#include "Graph/ProgramGraph.h"


class Algorithm {
public:
    virtual void analyse(Analysis analysis, ProgramGraph programGraph);
};


#endif /* Algorithm_h */