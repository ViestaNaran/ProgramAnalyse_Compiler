#include "Write.h"


string Write::getType() {
    return "write";
}

Identifiers Write::getUsedVariables() {
    vector<string> variables;
    vector<string> arrays;
    vector<string> records;
    return Identifiers(variables, arrays, records);
}

Identifiers Write::getDefinedVariables() {
    return this->a->getUsedVariables();
}

Write::Write(Arithmetic* a) {
    this->a = a;
}

string Write::toString() {
    return "write " + a->toString();
}