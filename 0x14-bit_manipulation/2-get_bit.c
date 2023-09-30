#include "main.h"
/**
 * get_bit - function that return value of bit
 * @n: the number
 * @index: index for start
 * Return: value of the index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1UL << index;
	{
		return (-1);
	}
	return ((n & mask) ? 1 : 0);
}
