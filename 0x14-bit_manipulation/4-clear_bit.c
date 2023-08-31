#include "main.h"
/**
 * clear_bit - function the set the value of bit to 0
 * @n: the number
 * @index: the starting point which is 0
 * Return: 1 if it works and -1 if an error occured
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
	return (1);
}
