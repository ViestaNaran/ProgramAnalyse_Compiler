
#ifndef Identifiers_h
#define Identifiers_h

#include <stdio.h>
#include <vector>
#include <string>

using namespace std;

class Identifiers {
public:
    vector<string> variables;
    vector<string> arrays;
    vector<string> records;

    Identifiers(vector<string> variables, vector<string> arrays, vector<string> records);
    Identifiers merge(Identifiers identifiers);
};

#endif /* Identifiers_h */
