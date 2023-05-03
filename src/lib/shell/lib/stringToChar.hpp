#ifndef STRINGTOCHAR_HPP_
#define STRINGTOCHAR_HPP_

#include <iostream>
#include <cstring>

char* stringToCharPointer(std::string str) {
    char* charPtr = new char[str.length() + 1];
    std::strcpy(charPtr, str.c_str());
    return charPtr;
}

#endif