//
//  RDTriple.h
//  ProgramAnalysis
//
//  Created by Sahas Arora on 11/27/20.
//  Copyright © 2020 Sahas Arora. All rights reserved.
//

#ifndef RDTriple_h
#define RDTriple_h

#include <stdio.h>
#include <string>

using namespace std;

class RDTriple {
public:
    string variable;
    int qStart;
    int qEnd;
    
    RDTriple(string var, int qStar, int qEn);
    
//    bool equals(list<> obj) {
//
//    }
    
//    int hashCode() {
//        return int(to_string(this->qStart));
//    }
    
};

#endif /* RDTriple_h */
