
#ifndef Identifiers_h
#define Identifiers_h

#include <stdio.h>
#include <string>
#include <unordered_set>
#include <iostream>

using namespace std;

class Identifiers {
public:
    unordered_set<string> variables;
    unordered_set<string> arrays;
    unordered_set<string> records;

    Identifiers();
    Identifiers merge(Identifiers identifiers);
    void addVariable(string x);
    void addArray(string A);
    void addRecord(string R);
    unordered_set<string> getVariables();
    unordered_set<string> getArrays();
    unordered_set<string> getRecords();
};

#endif /* Identifiers_h */
