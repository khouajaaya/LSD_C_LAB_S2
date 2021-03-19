/*
** Another stange file with the extension .h not .c
** these type of files called header files.
** The primary purpose of a header file is to propagate declarations to code
** files. Header files allow us to put declarations in one location and then
** import them wherever we need them. This can save a lot of typing in
** multi-file programs.
** for more info: https://www.geeksforgeeks.org/header-files-in-c-cpp-and-its-uses/
aya
*/

#ifndef HEADER
#define HEADER

#include <stdio.h>
#include <time.h>

int iterative_fibo(int n);
int recursive_fibo(int n);

#endif
