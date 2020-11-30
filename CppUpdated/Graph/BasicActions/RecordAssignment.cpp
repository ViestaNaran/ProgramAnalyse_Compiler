#include "RecordAssignment.h"


string RecordAssignment::getType() {
    return "recordAssignment";    
}

Identifiers RecordAssignment::getUsedVariables() {
    return this->a->getUsedVariables();
}

Identifiers RecordAssignment::getDefinedVariables() {
    vector<string> variables;
    vector<string> arrays;
    vector<string> records;
    records.push_back(R->name);
    return Identifiers(variables, arrays, records);
}

RecordAssignment::RecordAssignment(Record* R, string field, Arithmetic* a) {
    this->R = R;
    this->field = field;
    this->a = a;
}

string RecordAssignment::toString() {
    return R->toString() + " := " + a->toString();
}