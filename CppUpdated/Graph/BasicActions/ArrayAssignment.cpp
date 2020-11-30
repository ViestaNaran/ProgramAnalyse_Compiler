#include "ArrayAssignment.h"


string ArrayAssignment::getType() {
    return "arrayAssignment";    
}

Identifiers ArrayAssignment::getUsedVariables() {
    return this->a->getUsedVariables().merge(A->getUsedVariablesInIndex());

}

Identifiers ArrayAssignment::getDefinedVariables() {
    vector<string> variables;
    vector<string> arrays;
    arrays.push_back(A->name);
    vector<string> records;
    return Identifiers(variables, arrays, records);
}

ArrayAssignment::ArrayAssignment(Array* A, Arithmetic* a) {
    this->A = A;
    this->a = a;
}

string ArrayAssignment::toString() {
    return A->toString() + " := " + a->toString();
}