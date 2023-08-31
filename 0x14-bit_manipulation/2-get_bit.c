#include "main.h"
/**
 * get_bit - function that return  the value of a bit at a give index
 * @n: the number
 * @index: the index that is the start
 * Return: the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	return ((n & mask) ? 1 : 0);
}
