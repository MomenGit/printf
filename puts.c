#include "main.h"
#include "stdlib.h"

/**
 * _puts - prints a string followed by a newline
 * @str: string to be printed
 *
 * Return: length of printed string
 */
int _puts(char *str)
{
	int i;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i]);

	return (i);
}
