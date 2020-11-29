
#include "Constant.h"
#include <vector>

Constant::Constant(int value){
    this->value = value;
}

Identifiers Constant::getUsedVariables() {
    vector<string> variables;
    vector<string> arrays;
    vector<string> records;
    return Identifiers(variables, arrays, records);

}

string Constant::toString() {
    return to_string(this->value);
}