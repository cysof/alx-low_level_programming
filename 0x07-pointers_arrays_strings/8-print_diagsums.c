#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the two diagonals of a.
 *
 * @a: Pointer to the square matrix of integers.
 * @size: Size of the square matrix (number of rows or columns).
 */
void print_diagsums(int *a, int size)
{
	int i;
	int sum_main_diagonal = 0;
	int sum_secondary_diagonal = 0;

	for (i = 0; i < size; i++)
	{
		sum_main_diagonal += a[i * size + i];
		sum_secondary_diagonal += a[i * size + (size - 1 - i)];
	}
	printf("Sum of the main diagonal: %d\n", sum_main_diagonal);
	printf("Sum of the secondary diagonal: %d\n", sum_secondary_diagonal);
}

