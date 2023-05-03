#ifndef COMMANDS_H_
#define COMMANDS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int check_for_basic_commands(char* command) {
    if (strcmp(command, "exit") == 0) {
        exit(EXIT_FAILURE);
    }
    else {
        fprintf(stderr, "  [-] Not a valid command for blackspy-framework.");
    }
    return 0;
}

#endif