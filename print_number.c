#include "main.h"

/**
 * print_number - description
 * @n: input integer
 *
 * Return: count of digits printed.
 */
int print_number(int n)
{
	int i, j, count;

	i = 10;
	count = 0;
	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}
	while (i > 1)
	{
		if (n > i)
			i = i * 10;
		else
		{
			i = i / 10;
			j = n / i;
			_putchar('0' + ((j < 10) ? j : 1));
			n = n % i;
			count++;
		}
	}

	return (count);
}
