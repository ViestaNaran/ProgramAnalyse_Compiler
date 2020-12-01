
#include "Record.h"
#include <vector>


Record::Record(string name, string field) {
    this->name = name;
    this->field = field;
}

string Record::getType() {
    return "record";
}

Identifiers Record::getUsedVariables() {
    Identifiers i;
    i.addRecord(name);
    return i;
}

string Record::toString() {
    return this->name+"."+this->field;
}