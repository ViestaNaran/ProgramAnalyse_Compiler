
#include "Array.h"
#include <vector>


Array::Array(string name, Arithmetic* index) {
    this->name = name;
    this->index = index;
}

string Array::getType() {
    return "array";
}

Identifiers Array::getUsedVariables() {
    Identifiers i;
    i.addArray(name);
    return i.merge(index->getUsedVariables());
}

Identifiers Array::getUsedVariablesInIndex() {
    return index->getUsedVariables();
}

string Array::toString() {
    return this->name + "[" + index->toString() + "]";
}