#include "main.h"

/**
 * specifier - ...
 *
 * @spec: ...
 * @ptr: ...
 * Return: int
 */
int specifier(const char *spec, va_list *ptr)
{
	int count;

	count = 0;
	switch (spec[0])
	{
	case 'c':
		count = _putchar(va_arg(*ptr, int)) + 1;
		break;
	case 'd':
	case 'i':
		break;
	case 'e':
		break;
	case 'E':
		break;
	case 'f':
		break;
	case 'g':
		break;
	case 'G':
		break;
	case 'o':
		break;
	case 's':
		count = _puts(va_arg(*ptr, char *));
		break;
	default:
		count = specifier2(spec, ptr);
		break;
	}

	return (count - 1);
}

/**
 * specifier2 - ...
 *
 * @spec: ...
 * @ptr: ...
 * Return: int
 */
int specifier2(const char *spec, va_list *ptr)
{
	int count;

	count = 0;
	switch (spec[0])
	{
	case 'u':
		break;
	case 'x':
		break;
	case 'X':
		break;
	case 'p':
		break;
	case 'n':
		break;
	case '%':
		count = _putchar('%') + 1;
		break;
	case 'r':
		count = puts_rev(va_arg(*ptr, char *));
		break;
	case 'R':
		count = rot13(va_arg(*ptr, char *));
		break;
	default:
		count = _putchar(spec[-1]) + _putchar(spec[0]) + 1;
		break;
	}

	return (count - 1);
}
