#ifndef FRAMEWORK_HPP_
#define FRAMEWORK_HPP_

#include <iostream>
#include <cstring>

#include "lib/stringToChar.hpp"
#include "lib/commands.h"

#define BUFFER 2048

int open_framework_shell(void) {
    std::string command;
    char string[2048];
    while (true) {
        std::cout << "  Blackspy# ";
        std::getline(std::cin, command);

        if (command.empty()) continue;
        if (command.length() >= BUFFER) {
            fprintf(stderr, "  [S] Command is to long please! (Bufferoverflow)\n");
            continue;
        }
        
        std::strcpy(string, stringToCharPointer(command));
        check_for_basic_commands(string);
    }
    return 0;
}

#endif