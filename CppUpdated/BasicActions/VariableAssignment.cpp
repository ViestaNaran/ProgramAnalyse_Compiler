#include "VariableAssignment.h"


string VariableAssignment::getType() {
    return "variableAssignment";
}

Identifiers VariableAssignment::getUsedVariables() {
    return this->a.getUsedVariables();
}

Identifiers VariableAssignment::getDefinedVariables() {
    return this->x.getUsedVariables();
}

VariableAssignment::VariableAssignment(Variable x, Arithmetic a) {
    this->x = x;
    this->a = a;
}

string VariableAssignment::toString() {
    return x.toString() + " := " + a.toString();
}