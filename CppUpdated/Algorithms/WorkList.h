#ifndef WorkList_h
#define WorkList_h



#include <stdio.h>
#include "../Algorithm.h"

#include "../Graph/ProgramGraph.h"
#include "../Analysis.h"


class WorkList : public Algorithm{
public:
    void analyse(Analysis analysis, ProgramGraph programGraph);
    virtual void empty();
    virtual bool isEmpty();
    virtual void insert(int q);
    virtual int extract();
};

#endif /* WorkList_h */