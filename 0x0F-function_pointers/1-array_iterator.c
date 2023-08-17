#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_iterator - calls a function given a parameter on each element of array
 * @array: integer array
 * @size: size of the array
 * @action: function pointer
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;
	for ( i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
void print_square(int num)
{
	printf("%d\n", num * num);
}
void print_cube(int num)
{
	printf("%d\n", num * num * num);
}
