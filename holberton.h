#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdlib.h>
#include <unistd.h>
#include <stdarg.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_num(long int n);
int print_string(char *str);
int print_binary(unsigned int num);
int print_unknown_spec(char c);

#endif /* HOLBERTON_H */
