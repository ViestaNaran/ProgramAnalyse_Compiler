
#include "And.h"


And::And(Boolean* b1, Boolean* b2){
    this->b1 = b1;
    this->b2 = b2;
}

Identifiers And::getUsedVariables() {
    return b1->getUsedVariables().merge(b2->getUsedVariables());
}

string And::toString() {
    return b1->toString() + " AND " + b2->toString();
}
