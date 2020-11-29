
#include "True.h"

Identifiers True::getUsedVariables() {
    vector<string> variables;
    vector<string> arrays;
    vector<string> records;
    return Identifiers(variables, arrays, records);
}

string True::toString() {
    return "True";
}

True::True() {}