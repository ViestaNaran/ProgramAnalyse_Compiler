
#include "Negation.h"

Identifiers Negation::getUsedVariables() {
    return boolean.getUsedVariables();
}

string Negation::toString() {
    return "-(" + boolean.toString() + ")";
}

Negation::Negation(Boolean b) {
    this->boolean = b;
}