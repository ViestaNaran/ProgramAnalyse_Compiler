#include "RecordAssignment.h"


string RecordAssignment::getType() {
    return "recordAssignment";    
}

Identifiers RecordAssignment::getUsedVariables() {
    return this->a->getUsedVariables();
}

Identifiers RecordAssignment::getDefinedVariables() {
    Identifiers i;
    i.addRecord(this->R->name);
    return i;
}

RecordAssignment::RecordAssignment(Record* R, string field, Arithmetic* a) {
    this->R = R;
    this->field = field;
    this->a = a;
}

string RecordAssignment::toString() {
    return R->toString() + " := " + a->toString();
}