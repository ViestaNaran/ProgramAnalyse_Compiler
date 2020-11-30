//
//  Edge.cpp
//  ProgramAnalysis
//
//  Created by Sahas Arora on 11/27/20.
//  Copyright © 2020 Sahas Arora. All rights reserved.

#include "Edge.h"
#include "Action.h"

Edge::Edge(int s, int e, Action *a) {
    s = this->start;
    e = this->end;
    a = this->a;
}

int Edge::getEnd() {
    return this->end;
}

int Edge::getStart() {
    return this->start;
}

Action* Edge::getAction() {
    return this->a;
}
