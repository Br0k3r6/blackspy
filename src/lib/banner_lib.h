#ifndef BANNER_LIB_H_
#define BANNER_LIB_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int print_out_banner(void) {
    fprintf(stdout, " _   _         _");
    fprintf(stdout, "| |_| |___ ___| |_ ___ ___ _ _");
    fprintf(stdout, "| . | | .'|  _| '_|_ -| . | | |");
    fprintf(stdout, "|___|_|__,|___|_,_|___|  _|_  |");
    fprintf(stdout, "                      |_| |___|");
    return 0;
}

#endif