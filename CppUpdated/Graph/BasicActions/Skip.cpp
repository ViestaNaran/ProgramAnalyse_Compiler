#include "Skip.h"


string Skip::getType() {
    return "skip";
}

Identifiers Skip::getUsedVariables() {
    return Identifiers();
}

Identifiers Skip::getDefinedVariables() {
    return Identifiers();
}

Skip::Skip() {
}

string Skip::toString() {
    return "Skip";
}