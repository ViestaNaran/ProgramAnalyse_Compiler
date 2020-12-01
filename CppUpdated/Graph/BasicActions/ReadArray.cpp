#include "ReadArray.h"


string ReadArray::getType() {
    return "readArray";
}

Identifiers ReadArray::getUsedVariables() {
    return Identifiers();
}

Identifiers ReadArray::getDefinedVariables() {
    return this->A->getUsedVariables();
}

ReadArray::ReadArray(Array *A) {
    this->A = A;
}

string ReadArray::toString() {
    return "read " + A->toString();
}