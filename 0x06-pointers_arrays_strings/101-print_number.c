#include "main.h"

/**
 * print_number - Function that prints an integer.
 * @n: The integer to be printed.
 */

void print_number(int n)
{
	int reversed = 0;
	int last_digit;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	while (n != 0)
	{
		last_digit = n % 10;
		reversed = reversed * 10 + last_digit;
		n /= 10;
	}
	while (reversed != 0)
	{
		_putchar(reversed % 10 + '0');
		reversed /= 10;
	}
}

