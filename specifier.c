#include "main.h"

int specifier(const char *spec, va_list *ptr)
{
	int count;

	count = 0;
	switch (spec[0])
	{
	case 'c':
		count = _putchar(va_arg(*ptr, int));
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
		count = _putchar('%');
		break;
	case 'r':
		count = puts_rev(va_arg(*ptr, char *));
		break;
	case 'R':
		count = rot13(va_arg(*ptr, char *));
		break;

	default:
		break;
	}

	return (count);
}
