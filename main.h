#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
int _putchar(char c);
int _printf(const char *format, ...);
void specifier(const char *spec, va_list *ptr);
char *flagger(char *flag);
char *width(char *n);
char *precision(char *exp);
char *length(char *n);
void puts_rev(char *s);
void _puts(char *str);
void rot13(char *str);
#endif
