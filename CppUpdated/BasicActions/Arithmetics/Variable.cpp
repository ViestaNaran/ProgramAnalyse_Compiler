
#include "Variable.h"
#include <vector>


Variable::Variable(string name) {
    this->name = name;
}

Identifiers Variable::getUsedVariables() {
    vector<string> variables;
    variables.push_back(name);
    vector<string> arrays;
    vector<string> records;
    return Identifiers(variables, arrays, records);

}

string Variable::toString() {
    return this->name;
}