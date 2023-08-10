#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"
int is_positive_integer(const char *s);

/**
 * multiply - Multiply two numbers.
 * @num1: The first number.
 * @num2: The second number.
 *
 * Return: The product of @num1 and @num2.
 */

int multiply(const char *num1, const char *num2)
{
	return (atoi(num1) * atoi(num2));
}

int main(int argc, char *argv[])
{
	const char *num1;
	const char *num2;
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}
	num1 = argv[1];
	num2 = argv[2];
	if (!(is_positive_integer(num1) && is_positive_integer(num2)))
	{
		printf("Error\n");
		return (98);
	}
	result = multiply(num1, num2);
	printf("%d\n", result);
	return (0);
}

/**
 * is_positive_integer - Check if a string is a positive integer.
 * @s: The string to check.
 *
 * Return: 1 if @s is a positive integer, otherwise 0.
 */
int is_positive_integer(const char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] < '0' || s[i] > '9')
		{
			return (0);
		}
	}
	return (1);
}

