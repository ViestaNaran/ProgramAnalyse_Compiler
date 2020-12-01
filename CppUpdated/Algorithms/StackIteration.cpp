#include <cstdlib>
#include <ctime>

#include "StackIteration.h"

StackIteration::StackIteration(){
}

void StackIteration::empty(){
    this->W = vector<int>();
}

bool StackIteration::isEmpty(){
    return this->W.empty();
}

void StackIteration::insert(int q) {
    this->W.push_back(q);
}

int StackIteration::extract() {
    int q = this->W.back();
    this->W.pop_back();
    return q;
}