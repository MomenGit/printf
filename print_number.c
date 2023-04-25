#include "main.h"
/**
 * print_number - description
 * @n: input integer
 */
int print_number(int n)
{
	int i, j;

	i = 10;
	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	while (i > 1)
	{
		if (n > i)
			i = i * 10;
		else
		{
			i = i / 10;
			j = n / i;
			putchar('0' + ((j < 10) ? j : 1));
			n = n % i;
		}
	}
	
}
