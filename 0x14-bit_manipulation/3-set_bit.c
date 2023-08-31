#include "main.h"
/**
 * set_bit - function that sets the value of a bit to 1
 * @n: the number
 * @index: the starting point
 * Return: 1 if it work or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n |= (1UL << index);
	return (1);
}
