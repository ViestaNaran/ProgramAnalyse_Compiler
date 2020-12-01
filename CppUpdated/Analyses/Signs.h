#ifndef Signs_h
#define Signs_h


#include <stdio.h>
#include <map>
#include <vector>
#include "../Graph/Edge.h"
#include "../Analysis.h"
#include "../Graph/Identifiers.h"
#include "../Graph/BasicActions/Arithmetic.h"

class Signs : public Analysis {
public:
    Signs(Identifiers* var, int n);
    void setToBottom(int q);
    void setToInitial(int q);
    bool satisfiesConstraint(Edge edge);
    void update(Edge edge);
    

    
    void printResults();

private: 

    map<string,vector<string>>* AA;
    Identifiers* var;
    map<pair<string, string>,vector<string>> add;
    map<pair<string, string>,vector<string>> sub;
    map<pair<string, string>,vector<string>> mul;
    map<pair<string, string>,vector<string>> div;

    bool isSubset(vector<string>,vector<string>);
    map<string,vector<string>> addAnalysisFunction(Edge edge, map<string,vector<string>> sigma);
    vector<string> evaluateArithmetic(Arithmetic* a);
    vector<string> applyOp(vector<string> s1, vector<string> s2,  map<pair<string, string>,vector<string>> op);
    
};


#endif /* Signs_h */