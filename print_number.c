#include "main.h"

/**
 * print_number - description
 * @n: input integer
 * @count: count of printed characters
 *
 * Return: count of digits printed.
 */
int print_number(int n, int count)
{
	count = 0;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
		count++;
	}
	if (n / 10)
	{
		count += print_number(n / 10, count);
	}
	_putchar(n % 10 + '0');
	count++;

	return (count);
}
