#include "main.h"

/**
 * print_number - description
 * @n: input integer
 */

int numbers_printer(int n)
{
    int temp, num_digits, count;
    int num_digits;

    num_digits = 0;
    temp = n;
    while (temp > 0)
    {
        num_digits++;
        temp /= 10;
    }

    for (int i = num_digits - 1; i >= 0; i--)
    {
        int digit = (n / (int)pow(10, i)) % 10;
        print_number(digit);
    }
    return (count);
}
