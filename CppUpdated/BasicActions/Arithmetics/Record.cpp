
#include "Record.h"
#include <vector>


Record::Record(string name, string field) {
    this->name = name;
    this->field = field;
}

Identifiers Record::getUsedVariables() {
    vector<string> variables;
    vector<string> arrays;
    vector<string> records;
    records.push_back(name);
    return Identifiers(variables, arrays, records);
}

string Record::toString() {
    return this->name+"."+this->field;
}