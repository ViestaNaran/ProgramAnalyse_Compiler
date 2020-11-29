
#include "Array.h"
#include <vector>


Array::Array(string name, Arithmetic index) {
    this->name = name;
    this->index = index;
}

Identifiers Array::getUsedVariables() {
    vector<string> variables;
    vector<string> arrays;
    arrays.push_back(name);
    vector<string> records;
    Identifiers id = Identifiers(variables, arrays, records);
    return id.merge(index.getUsedVariables());
}

Identifiers Array::getUsedVariablesInIndex() {
    return index.getUsedVariables();
}

string Array::toString() {
    return this->name + "[" + index.toString() + "]";
}