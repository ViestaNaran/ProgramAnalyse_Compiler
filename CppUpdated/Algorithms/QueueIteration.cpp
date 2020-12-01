#include <cstdlib>
#include <ctime>

#include "QueueIteration.h"

QueueIteration::QueueIteration(){
}

void QueueIteration::empty(){
    this->W = vector<int>();
}

bool QueueIteration::isEmpty(){
    return this->W.empty();
}

void QueueIteration::insert(int q) {
    this->W.push_back(q);
}

int QueueIteration::extract() {
    int q = this->W.front();
    this->W.erase(W.front());
    return q;
}