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
int puts_rev(char *s);
int _puts(char *str);
int rot13(char *str);
#endif
