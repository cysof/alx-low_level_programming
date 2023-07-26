#include "main.h"
#include <string.h>

/**
 * infinite_add - Function that adds two numbers.
 * @n1: The first number as a string.
 * @n2: The second number as a string.
 * @r: The buffer to store the result.
 * @size_r: The size of the buffer.
 *
 * Return: A pointer to the result if the result can be stored
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0;
	int i, j;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
		return (0);
	i = len1 - 1;
	j = len2 - 1;
	r[size_r - 1] = '\0';
	size_r--;
	while (i >= 0 || j >= 0 || carry)
	{
		int digit1 = (i >= 0) ? n1[i] - '0' : 0;
		int digit2 = (j >= 0) ? n2[j] - '0' : 0;
		int sum = digit1 + digit2 + carry;

		carry = sum / 10;

		if (size_r <= 0)
			return (0);
		r[size_r - 1] = (sum % 10) + '0';
		size_r--;
		i--;
		j--;
	}
	return (r + size_r + 1);
}

