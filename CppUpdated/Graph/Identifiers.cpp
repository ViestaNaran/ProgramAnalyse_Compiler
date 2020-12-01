



#include "Identifiers.h"


Identifiers::Identifiers() {
}

Identifiers::merge(Identifiers i){
    Identifiers merged;
    for (auto var : i.getVariables()){
        merged.addVariable(var);
    }
    for (auto arr : i.getArrays()){
        merged.addArray(arr);
    }
    for (auto rec : i.getRecords()){
        merged.addRecord(rec);
    }
    for (auto var : this->getVariables()){
        merged.addVariable(var);
    }
    for (auto arr : this->getArrays()){
        merged.addArray(arr);
    }
    for (auto rec : this->getRecords()){
        merged.addRecord(rec);
    }
    return merged;
}

Identifiers::addVariable(string variable) {
    this->variables.insert(variable);    
}

Identifiers::addArray(string array) {
    this->arrays.insert(array);    
}

Identifiers::addRecord(string record) {
    this->records.insert(record);
}

Identifiers::getVariables(){
    return this->variables;
}

Identifiers::getArrays(){
    return this->arrays;
}

Identifiers::getRecords(){
    return this->records;
}

// TODO