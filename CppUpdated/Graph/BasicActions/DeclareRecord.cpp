#include "DeclareRecord.h"


string DeclareRecord::getType() {
    return "declareRecord";
}

Identifiers DeclareRecord::getUsedVariables() {
    return Identifiers();
}

Identifiers DeclareRecord::getDefinedVariables() {
    Identifiers i;
    i.addRecord(this->R);
    return i;
}

DeclareRecord::DeclareRecord(string R) {
    this->R = R;
}

string DeclareRecord::toString() {
    return "{int fst, int snd} " + R;
}