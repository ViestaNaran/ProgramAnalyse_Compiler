#include <cstdlib>
#include <ctime>

#include "ChaoticIteration.h"

ChaoticIteration::ChaoticIteration(){
    srand((unsigned) time(0));
}

void ChaoticIteration::empty(){
    this->W = vector<int>();
}

bool ChaoticIteration::isEmpty(){
    return this->W.empty();
}

void ChaoticIteration::insert(int q) {
    this->W.push_back(q);
}

int ChaoticIteration::extract() {
    int index = rand() % this->W.size();
    int q = this->W[index];
    this->W.erase(W.begin() + index);
    return q;
}