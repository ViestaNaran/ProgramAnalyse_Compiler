#include "Skip.h"


string Skip::getType() {
    return "skip";
}

Identifiers Skip::getUsedVariables() {
    vector<string> variables;
    vector<string> arrays;
    vector<string> records;
    return Identifiers(variables, arrays, records);
}

Identifiers Skip::getDefinedVariables() {
    vector<string> variables;
    vector<string> arrays;
    vector<string> records;
    return Identifiers(variables, arrays, records);
}

Skip::Skip() {
}

string Skip::toString() {
    return "Skip";
}