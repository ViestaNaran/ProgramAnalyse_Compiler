#include "DeclareArray.h"


string DeclareArray::getType() {
    return "declareArray";
}

Identifiers DeclareArray::getUsedVariables() {
    return Identifiers();
}

Identifiers DeclareArray::getDefinedVariables() {
    Identifiers i;
    i.addArray(this->A);
    return i;
}

DeclareArray::DeclareArray(string A) {
    this->A = A;
}

string DeclareArray::toString() {
    return "int " + this->A;
}