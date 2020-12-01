#include "Write.h"


string Write::getType() {
    return "write";
}

Identifiers Write::getUsedVariables() {
    return Identifiers();
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