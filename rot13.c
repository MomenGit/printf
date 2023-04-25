#include "main.h"
#include <stdlib.h>

/**
 * rot13 - encodes a string using rot13
 * @str: the string to be encoded
 *
 * Return: On success the encoded string.
 * On error, .
 */
int rot13(char *str)
{
	int i;
	char tmp;

	if (str == NULL)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
		while ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
		{
			tmp = str[i] - 13;
			if ((tmp < 'A') || (str[i] >= 'a' && tmp < 'a'))
				tmp = str[i] + 13;
			/*str[i] = tmp;*/
			_putchar(tmp);
			break;
		}
	}

	return (i);
}
