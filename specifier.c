#include "main.h"

void specifier(const char *spec, va_list *ptr)
{
	switch (spec[0])
	{
	case 'c':
		_putchar(va_arg(*ptr, int));
		break;
	case 'd':
	case 'i':
		numbers_printer(va_arg(*ptr ,int));
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
		_puts(va_arg(*ptr, char *));
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
		_putchar('%');
		break;
	case 'r':
		puts_rev(va_arg(*ptr, char *));
		break;
	case 'R':
		rot13(va_arg(*ptr, char *));
		break;

	default:
		break;
	}
}
