
#ifndef ChaoticIteration_h
#define ChaoticIteration_h


#include <stdio.h>
#include "WorkList.h"


class ChaoticIteration : public WorkList{
public:
    ChaoticIteration();
    void empty();
    bool isEmpty();
    void insert(int q);
    int extract();

private:
    vector<int> W;
};


#endif /* ChaoticIteration_h */