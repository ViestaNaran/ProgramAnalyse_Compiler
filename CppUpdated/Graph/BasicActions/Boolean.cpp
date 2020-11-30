
#include "Boolean.h"

string Boolean::getType() {
    return "boolean";
}

Identifiers Boolean::getDefinedVariables(){
    vector<string> variables;
    vector<string> arrays;
    vector<string> records;
    return Identifiers(variables, arrays, records);

}