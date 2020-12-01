
#include "Constant.h"
#include <vector>

Constant::Constant(int value){
    this->value = value;
}

string Constant::getType() {
    return "constant";
}

Identifiers Constant::getUsedVariables() {
    return Identifiers();
}

string Constant::toString() {
    return to_string(this->value);
}