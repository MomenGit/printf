#include "main.h"
#include "stdlib.h"

/**
 * _puts - prints a string followed by a newline
 * @str: string to be printed
 */
void _puts(char *str)
{
	int i;

	if (str == NULL)
		return;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);
}
