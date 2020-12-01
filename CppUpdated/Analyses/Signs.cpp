
#include "Signs.h"

Signs::Signs(Identifiers* var, int n){
    this->AA = new map<string,vector<string>>[n]; // Initialize an array of maps here. 
    this->var = var;

    this-> add = { 
        
        { vector<"-","-">, vector<"-">}, 
        { vector<"-","0">, vector<"-">},
        { vector<"-","+">, vector<"-","0,","+">}, 
        { vector<"0","-">, vector<"-">}, 
        { vector<"0","0">, vector<"0">}, 
        { vector<"0","+">, vector<"+">}, 
        { vector<"+","-">, vector<"-","0","+">}, 
        { vector<"+","0">, vector<"0","+">}, 
        { vector<"+","+">, vector<"+">},
        }


    this-> sub = { 
        
        { vector<"-","-">, vector<"-","0","+">}, 
        { vector<"-","0">, vector<"+">},
        { vector<"-","+">, vector<"-","0,","+">}, 
        { vector<"0","-">, vector<"+">}, 
        { vector<"0","0">, vector<"0">}, 
        { vector<"0","+">, vector<"-">}, 
        { vector<"+","-">, vector<"-","0","+">}, 
        { vector<"+","0">, vector<"0","+">}, 
        { vector<"+","+">, vector<"-","0","+">},
        }


    this-> mul = { 
        
        { vector<"-","-">, vector<"+">}, 
        { vector<"-","0">, vector<"0">},
        { vector<"-","+">, vector<"-">}, 
        { vector<"0","-">, vector<"0">}, 
        { vector<"0","0">, vector<"0">}, 
        { vector<"0","+">, vector<"0">}, 
        { vector<"+","-">, vector<"-">}, 
        { vector<"+","0">, vector<"0">}, 
        { vector<"+","+">, vector<"+">},
        }

    this-> div = { 
        
        { vector<"-","-">, vector<"+">}, 
        { vector<"-","0">, vector<"undef">},
        { vector<"-","+">, vector<"-">}, 
        { vector<"0","-">, vector<"undef">}, 
        { vector<"0","0">, vector<"undef">}, 
        { vector<"0","+">, vector<"undef">}, 
        { vector<"+","-">, vector<"-">}, 
        { vector<"+","0">, vector<"undef">}, 
        { vector<"+","+">, vector<"+">},
        
        }
}


void Signs::setToBottom(int q){
    for (auto var : this->var->getVariables()) {
        vector<string> signs;     
        (this->AA+q)-> insert(pair<string,vector<string>>(var,signs));
    }
    for (auto arr : this->var->getArrays()) {
        vector<string> signs;        
        (this->AA+q)-> insert(pair<string,vector<string>>(arr,signs));
    }
    for (auto rec : this->var->getRecords()) {
        vector<string> signs;        
        (this->AA+q)-> insert(pair<string,vector<string>>(rec+".fst",signs));
        (this->AA+q)-> insert(pair<string,vector<string>>(rec+".snd",signs));
    }
}


void Signs::setToInitial(int q) {
    map<string, vector<string>>::iterator it;
    for ( it = (AA+q)->begin(); it != (AA+q)->end(); ++it ) {
        vector<string> signs = {"-","0","+"}; 
        it->second = signs;
    }
}

bool Signs::satisfiesConstraint(Edge edge){
    map<string, vector<string>> startInfoCopy = map<string, vector<string>>(*(AA+edge.getStart()));
    map<string, vector<string>> endInfo = *(AA+edge.getEnd());

    map<string, vector<string>> updatedCopy = addAnalysisFunction(startInfoCopy, edge);

    return isSubset(updatedCopy,endInfo);
}

void Signs::update(Edge edge){

    map<string, vector<string>> startInfoCopy = map<string, vector<string>>(*(AA+edge.getStart()));
    map<string, vector<string>> endInfo = *(AA+edge.getEnd());

    map<string, vector<string>> updatedCopy = addAnalysisFunction(startInfoCopy, edge);


    map<string, vector<string>>::iterator it;
    for ( it = updatedCopy.begin(); it != updatedCopy.end(); ++it ) {
        vector<string> s1 = it->second;
        vector<string> s2 = endInfo.at(it->first);
        for ( string sign : s1) {
            if (find(s2.begin(), s2.end(), sign) == s2.end()) {
                endInfo.at(it->first).push_back(sign);
        }
    }


}   

map<string,vector<string>> addAnalysisFunction(Edge edge, map<string,vector<string>> sigma){

    Action* alpha = edge.getAction();

    if (alpha.getType() == "variableAssignment")){
        vector<string> signs = evaluateArithmetic(alpha->a);
        sigma.at(alpha->x->name) = signs;
    }
    if (alpha.getType() == "arrayAssignment")){
        vector<string> signs = evaluateArithmetic(alpha->a);
        sigma.at(alpha->A->name) = signs;
    }
    if (alpha.getType() == "recordAssignment")){
        vector<string> signs = evaluateArithmetic(alpha->a);
        Record* R = alpha->R;
        sigma.at(R->name+"."+R->field) = signs;
    }
}


void Signs::printResults(){
    
}

bool isSubset(map<string,vector<string>> sigma1, map<string,vector<string>> sigma2) 
{
    map<string, vector<string>>::iterator it;
    for ( it = sigma1.begin(); it != sigma1.end(); ++it ) {
        vector<string> s1 = it->second;
        vector<string> s2 = sigma2.at(it->first);
        for ( string sign : s1) {
            if (find(s2.begin(), s2.end(), sign) == s2.end()) {
                return false;
        }
    }
    return true;

}



vector<string> evaluateArithmetic(Arithmetic* a, int q) {
    
    if (variable) {
        return (AA+q)->at(a->name);
    }

    if (constant) {
        if (a->value < 0) {
            return vector<string>{"-"};
        }
        if (a->value == 0) {
            return vector<string>{"0"};
        }
        else {
            return vector<string>{"+"};
        }
    }

    if (operation) {
        if (a->op == "+") {
            return applyOp(evaluateArithmetic(a->a1),evaluateArithmetic(a->a2), this->add);
        }
        if (a->op == "-"){
            return applyOp(evaluateArithmetic(a->a1),evaluateArithmetic(a->a2), this->sub);
        }
        if (a->op == "*") {
            return applyOp(evaluateArithmetic(a->a1),evaluateArithmetic(a->a2), this->mult);
        }
        if (a->op == "/") {
            return applyOp(evaluateArithmetic(a->a1),evaluateArithmetic(a->a2), this->div);
        }
    }
}

vector<string> Signs::applyOp(vector<string> s1, vector<string> s2,  map<pair<string, string>,vector<string>> op){
    
    vector<string> result;
    vector<string> lookup;
    for (auto sign1 : s1) {
        for (auto sign2 : s1) {
            lookup = op.at(pair<string, string>(sign1, sign2));
            for (auto i : lookup) {
                if (find(result.begin(), result.end(), i) != v.end()) {
                    result.push_back(i);
                }
            }
        }
    }

    return result;
}


