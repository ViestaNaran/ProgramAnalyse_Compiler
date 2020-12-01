#include "ReadVariable.h"


string ReadVariable::getType() {
    return "readVariable";
}

Identifiers ReadVariable::getUsedVariables() {
    return Identifiers();
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