#include "main.h"
#include <stdarg.h>
#include <stdlib.h>

/**
 * _printf - Write formatted output to stdout.
 *
 * This function is a possible cancellation point and therefore not
 * marked with __THROW.
 *
 * @format: ..
 * @...: ...
 * Return: ...
 */
int _printf(const char *format, ...)
{
	int i, count;
	va_list arg_ptr;

	if (format == NULL)
		return (0);

	va_start(arg_ptr, format);
	count = 0;
	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
		{
			i++;
			count += (specifier(&format[i], &arg_ptr) - 1);
		}
	}

	va_end(arg_ptr);
	count += i;
	return (count);
}
