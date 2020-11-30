#include "DeclareVariable.h"


string DeclareVariable::getType() {
    return "declareVariable";
}

Identifiers DeclareVariable::getUsedVariables() {
    vector<string> variables;
    vector<string> arrays;
    vector<string> records;
    return Identifiers(variables, arrays, records);
}

Identifiers DeclareVariable::getDefinedVariables() {
    return this->x->getUsedVariables();
}

DeclareVariable::DeclareVariable(Variable* x) {
    this->x = x;
}

string DeclareVariable::toString() {
    return "int " + x->toString();
}