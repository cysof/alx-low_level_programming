#include "main.h"
/**
 * binary_to_uint - function that converts a binary num
 * @b: character to be converted
 * Return: 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int output = 0;

	if (b == NULL)
	{
		return (0);
	}
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		output = output * 2 + (*b - '0');
		b++;
	}
	return (output);
}
