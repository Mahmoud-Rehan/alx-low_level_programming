#ifndef FUNCTION_POINTERS_H_
#define FUNCTION_POINTERS_H_
#include <stddef.h>

int _putchar(char c);
void print_name(char *name, void (*f)(char *));

#endif
