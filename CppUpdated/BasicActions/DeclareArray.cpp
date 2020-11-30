#include "DeclareArray.h"


string DeclareArray::getType() {
    return "declareArray";
}

Identifiers DeclareArray::getUsedVariables() {
    vector<string> variables;
    vector<string> arrays;
    vector<string> records;
    return Identifiers(variables, arrays, records);
}

Identifiers DeclareArray::getDefinedVariables() {
        vector<string> variables;
    vector<string> arrays;
    arrays.push_back(this->A);
    vector<string> records;
    return Identifiers(variables, arrays, records);
}

DeclareArray::DeclareArray(string A) {
    this->A = A;
}

string DeclareArray::toString() {
    return "int " + this->A;
}