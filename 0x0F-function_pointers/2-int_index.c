#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - searches for an integer
 * @array: integer array
 * @size: size of array (number of integers)
 * @cmp: function pointer
 * Return: void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, output;
	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	if(size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		output = cmp(array[i]);
		if (output == 1)
		{
			return (i);
		}
	}
	return (-1);
}
