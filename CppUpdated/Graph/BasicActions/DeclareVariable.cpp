#include "DeclareVariable.h"


string DeclareVariable::getType() {
    return "declareVariable";
}

Identifiers DeclareVariable::getUsedVariables() {
    return Identifiers();
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