#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Function that adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result if the result 0.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = 0, len2 = 0, sum, carry = 0;
	int i, j;

	while (n1[len1])
		len1++;
	while (n2[len2])
		len2++;
	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);
	for (i = len1 - 1, j = len2 - 1; i >= 0 || j >= 0 || carry; i--, j--)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;

		sum = digit1 + digit2 + carry;
		carry = sum / 10;
		r[size_r - 1] = (sum % 10) + '0';
		size_r--;
	}
	while (size_r > 0)
	{
		r[size_r - 1] = r[size_r];
		size_r--;
	}
	return (r);
}
