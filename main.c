#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "arr_list.h"

int main() {

    typedef struct {
        char *name;
        int age;
        char buf[1024];
    } Person;

    Person p;
    printf("%lu\n", sizeof(p));

    char *a = (char *) malloc(sizeof(char));

    return 0;
}