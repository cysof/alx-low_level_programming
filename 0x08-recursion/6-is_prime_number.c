#include "main.h"

/**
 * is_prime_recursive - Helper function to chec cursively.
 * @n: The number to be checked.
 * @divisor: The current divisor to check divisibility (initially 2).
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_recursive(int n, int divisor)
{
	if (n <= 1)
		return (0);

	if (divisor == n)
		return (1);

	if (n % divisor == 0)
		return (0);

	return (is_prime_recursive(n, divisor + 1));
}

/**
 * is_prime_number - Returns 1 if the input integer i.
 * @n: The number to be checked.
 *
 * Return: 1 if the number is prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	return (is_prime_recursive(n, 2));
}

