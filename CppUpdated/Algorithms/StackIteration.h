#ifndef StackIteration_h
#define StackIteration_h


#include <stdio.h>
#include "WorkList.h"


class StackIteration : public WorkList{
public:
    StackIteration();
    void empty();
    bool isEmpty();
    void insert(int q);
    int extract();

private:
    vector<int> W;
};


#endif /* StackIteration_h */