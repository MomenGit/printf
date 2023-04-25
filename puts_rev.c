#include "main.h"
#include <stdlib.h>
/**
 * puts_rev - prints a string, in reverse, followed by a new line
 * @s: string to be printed
 *
 * Return: length of printed string
 */
int puts_rev(char *s)
{
	int len, count;

	if (s == NULL)
		return (0);

	len = sizeof(s) - 1;
	count = len - 1;
	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}

	return (len);
}
