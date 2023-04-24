#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

int _printf(const char *format, ...)
{
	int i;
	va_list arg_ptr;

	if (format == NULL)
		return (0);

	va_start(arg_ptr, format);
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
			specifier(length(precision(width(flagger(&format[i + 1])))));
	}

	va_end(arg_ptr);
	return (i - 1);
}