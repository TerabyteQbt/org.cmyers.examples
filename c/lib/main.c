#include <stdio.h>
#include "foo.h"

int main() {
    printf("Developers:\n");
    const char * const * devs = developers();
    int i = 0;
    printf("devs: %p\n", devs);
    printf("*devs: %p\n", *devs);
    printf("**devs: %c\n", **devs);
    for (i = 0; devs[i]; ++i) {
        printf("i=%d", i);
        printf("\t%s\n", devs[i]);
    }
    return(0);
}


