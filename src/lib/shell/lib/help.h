#ifndef HELP_H_
#define HELP_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int print_help(void) {
    printf("\n");
    printf("  +---------+--------------------------------------+\n");
    printf("  | help    | Shows this message.                  |\n");
    printf("  | exit    | Exits blackspy-framework.            |\n");
    printf("  | banner  | Shows the blackspy-framework banner. |\n");
    printf("  | clear   | Clears the command line.             |\n");
    printf("  +---------+--------------------------------------+\n");
    printf("\n");
    return 0;
}

#endif