#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
int specifier(const char *spec, va_list *ptr);
int specifier2(const char *spec, va_list *ptr);
char *flagger(char *flag);
char *width(char *n);
char *precision(char *exp);
char *length(char *n);
<<<<<<< HEAD
void puts_rev(char *s);
void _puts(char *str);
void rot13(char *str);
void print_number(int n);
void numbers_printer(int n);
=======
int puts_rev(char *s);
int _puts(char *str);
int rot13(char *str);
>>>>>>> 1370b4748faeeef2577d7e7a2f472774ab1b3e59
#endif
