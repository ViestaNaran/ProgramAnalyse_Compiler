
#include "Constant.h"
#include <vector>

Constant::Constant(int value){
    this->value = value;
}

Identifiers Constant::getUsedVariables() {
    return Identifiers();
}

string Constant::toString() {
    return to_string(this->value);
}