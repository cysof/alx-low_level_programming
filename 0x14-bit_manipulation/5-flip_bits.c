#include "main.h"
/**
 * flip_bits - function that return number of bits
 * @n: number
 * @m: number2
 * Return: 1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int result = n ^ m;
	unsigned int count = 0;

	while (result > 0)
	{
		count += result & 1;
		retult >>= 1;
	}
	return (count);
}
