#include "DeclareRecord.h"


string DeclareRecord::getType() {
    return "declareRecord";
}

Identifiers DeclareRecord::getUsedVariables() {
    vector<string> variables;
    vector<string> arrays;
    vector<string> records;
    return Identifiers(variables, arrays, records);
}

Identifiers DeclareRecord::getDefinedVariables() {
    vector<string> variables;
    vector<string> arrays;
    vector<string> records;
    records.push_back(this->R);
    return Identifiers(variables, arrays, records);
}

DeclareRecord::DeclareRecord(string R) {
    this->R = R;
}

string DeclareRecord::toString() {
    return "{int fst, int snd} " + R;
}