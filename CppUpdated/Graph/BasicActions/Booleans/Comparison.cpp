
#include "Comparison.h"

Identifiers Comparison::getUsedVariables() {
    return a1->getUsedVariables().merge(a2->getUsedVariables());
}

string Comparison::toString() {
    return a1->toString() + operation + a2->toString();
}

Comparison::Comparison(Arithmetic* a1, Arithmetic* a2, string operation) {
    this->a1 = a1;
    this->a2 = a2;
    this->operation = operation;
}