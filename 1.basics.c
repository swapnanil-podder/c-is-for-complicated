// C11
// handles standard io input/output
// printf_s() --> prints to console but safer
// gets_s()   --> getting use input but safer (buffer, char[])
// const char *var_name = "string" --> How to declare a 'string in C'
// const char var_name[] = "string"
// printf_s(%d, %s, %u) -- format -- %d -- integer, %s -- string(const char*), %u -- unsigned
// abcd --> | 65 | 66 | 67 | 68 | 0(null terminator. it just means,"Hey, this string stop here, please stop reading") |
// char is just int8_t or uint8_ta
// On Linux x86_64, Windows, and macOS, char is usually signed by default.
// On ARM processors (like the Raspberry Pi or Apple Silicon M1/M2/M3), char is usually unsigned by default.
#include <stdio.h>

// malloc(), calloc()
#include <stdlib.h>

// memcpy(), etc
#include <memory.h>

// LPCSTR
// #include <windows.h>

#define __STDC_WANT_LIB_EXT1__ 1 // Request secure functions
#include <stdio.h>

// If the safe library functions are NOT supported by the OS/compiler:
#ifndef __STDC_LIB_EXT1__
#define printf_s printf // Tell the preprocessor to replace printf_s with printf
#endif

int main() {
    // This will now compile on both Windows and Linux
    printf_s("%s%s", "Hello World", "!");
    return 0;
}
