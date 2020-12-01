
#include "Variable.h"
#include <vector>


Variable::Variable(string name) {
    this->name = name;
}

Identifiers Variable::getUsedVariables() {
    Identifiers i;
    i.addVariable(name);
    return i;
}

string Variable::toString() {
    return this->name;
}