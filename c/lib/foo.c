#include <stdio.h>
#include "foo.h"

const char * const * developers() {
    printf("here\n");
    const char * const * devs = { "amling", "cmyers", NULL };
    printf("there\n");
    return devs;
}


