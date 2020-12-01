



#include "Identifiers.h"


Identifiers::Identifiers() {
}

Identifiers Identifiers::merge(Identifiers i){
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

void Identifiers::addVariable(string variable) {
    this->variables.insert(variable);    
}

void Identifiers::addArray(string array) {
    this->arrays.insert(array);    
}

void Identifiers::addRecord(string record) {
    this->records.insert(record);
}

unordered_set<string> Identifiers::getVariables(){
    return this->variables;
}

unordered_set<string> Identifiers::getArrays(){
    return this->arrays;
}

unordered_set<string> Identifiers::getRecords(){
    return this->records;
}

// TODO