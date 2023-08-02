#include "main.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number for which the factorial will be calculated.
 *
 * Return: Factorial of the number, or -1 for invalid input.
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
