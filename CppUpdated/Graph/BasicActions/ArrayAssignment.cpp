#include "ArrayAssignment.h"


string ArrayAssignment::getType() {
    return "arrayAssignment";    
}

Identifiers ArrayAssignment::getUsedVariables() {
    return this->a->getUsedVariables().merge(A->getUsedVariablesInIndex());

}

Identifiers ArrayAssignment::getDefinedVariables() {
    Identifiers i;
    i.addArray(A->name);
    return i;
}

ArrayAssignment::ArrayAssignment(Array* A, Arithmetic* a) {
    this->A = A;
    this->a = a;
}

string ArrayAssignment::toString() {
    return A->toString() + " := " + a->toString();
}