#include "main.h"
#include <stdlib.h>
/**
 * puts_rev - prints a string, in reverse, followed by a new line
 * @s: string to be printed
 */
void puts_rev(char *s)
{
	int len;

	if (s == NULL)
		return;

	len = sizeof(s) - 2;

	while (len >= 0)
	{
		_putchar(s[len]);
		len--;
	}
}
