#include <string.h>

#include "../y.tab.h"

extern int strcmp(const char*, const char*);

extern char Data_Type[50];

int isValidAssignment(char* givenDataType) {
    int i=0;

    if(strcmp(givenDataType, Data_Type) != 0) {
        return 0;
    }
    return 1;
}


char* itoa(int number) {
    static char buffer[33];
    snprintf(buffer, sizeof(buffer), "%d", number);
    return buffer;
}



