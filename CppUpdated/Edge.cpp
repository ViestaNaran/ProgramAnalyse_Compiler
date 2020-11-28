//
//  Edge.cpp
//  ProgramAnalysis
//
//  Created by Sahas Arora on 11/27/20.
//  Copyright © 2020 Sahas Arora. All rights reserved.
//

#include "Edge.h"


Edge::Edge(int s, int e) {
    s = this->start;
    e = this->end;
}

int Edge::getEnd() {
    return this->end;
}

int Edge::getStart() {
    return this->start;
}


