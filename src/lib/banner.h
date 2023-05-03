#ifndef BANNER_H_
#define BANNER_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "banner_lib.h"

int print_banner(void) {
    print_out_banner();
    system("python3 src/lib/blackspy_info.py");
    return 0;
}

#endif