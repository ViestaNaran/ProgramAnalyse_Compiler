
#ifndef QueueIteration_h
#define QueueIteration_h


#include <stdio.h>
#include "WorkList.h"


class QueueIteration : public WorkList{
public:
    QueueIteration();
    void empty();
    bool isEmpty();
    void insert(int q);
    int extract();

private:
    vector<int> W;
};


#endif /* QueueIteration_h */