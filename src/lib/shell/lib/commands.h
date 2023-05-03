#ifndef COMMANDS_H_
#define COMMANDS_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "../../banner.h"
#include "help.h"

int check_for_basic_commands(char* command) {
    if (strcmp(command, "exit") == 0) {
        exit(EXIT_FAILURE);
    }

    else if (strcmp(command, "clear") == 0) {
        system("clear");
    }

    else if (strcmp(command, "banner") == 0) {
        printf("\n");
        print_banner();
        printf("\n");
    }

    else if (strcmp(command, "help") == 0) {
        print_help();
    }
    
    else {
        fprintf(stderr, "  [-] Not a valid command for blackspy-framework.\n");
    }
    return 0;
}

#endif