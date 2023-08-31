#include "main.h"
/**
 * flip_bits - function that flip bits
 * @n: first num to flip
 * @m: second num to flip
 * Return: always return 0
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result = n ^ m;
	unsigned int count = 0;

	while (xor_result > 0)
	{
		count += xor_result & 1;
		xor_result >>= 1;
	}
	return (count);
}

