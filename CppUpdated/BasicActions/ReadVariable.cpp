#include "ReadVariable.h"


string ReadVariable::getType() {
    return "readVariable";
}

Identifiers ReadVariable::getUsedVariables() {
    vector<string> variables;
    vector<string> arrays;
    vector<string> records;
    return Identifiers(variables, arrays, records);
}

Identifiers ReadVariable::getDefinedVariables() {
    return this->x->getUsedVariables();
}

ReadVariable::ReadVariable(Variable* x) {
    this->x = x;
}

string ReadVariable::toString() {
    return "read " + x->toString();
}