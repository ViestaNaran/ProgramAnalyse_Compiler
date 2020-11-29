#include "ReadArray.h"


string ReadArray::getType() {
    return "readArray";
}

Identifiers ReadArray::getUsedVariables() {
    vector<string> variables;
    vector<string> arrays;
    vector<string> records;
    return Identifiers(variables, arrays, records);
}

Identifiers ReadArray::getDefinedVariables() {
    return this->A.getUsedVariables();
}

ReadArray::ReadArray(Array A) {
    this->A = A;
}

string ReadArray::toString() {
    return "read " + A.toString();
}