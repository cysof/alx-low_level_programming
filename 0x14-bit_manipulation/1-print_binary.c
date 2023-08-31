#include "main.h"
/**
 * print_binary - function that print the binary 
 * representation of a num
 *
 * @n: the num to be printed
 * Return:  Always return 0
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	_putchar((n & 1) ? '1' : '0');
}
