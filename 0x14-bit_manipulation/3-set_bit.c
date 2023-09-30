#include "main.h"
/**
 * set_bit - function that sets the value of bit to 1
 * @n: number
 * @index: the start
 * Return: 1 on sucess -1 on failure
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
