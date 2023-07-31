#include "main.h"

/**
 * _strspn - Gets the length of a prefix substring.
 *
 * @s: Pointer to the string to search in.
 * @accept: Pointer to the string containing characters to be matched.
 *
 * Return: The number of bytes in the initial segment of s which consist only
 *         of bytes from the string accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int match;
	int i;

	while (*s != '\0')
	{
		match = 0;
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				match = 1;
				break;
			}
		}
		if (!match)
		{
			break;
		}
		count++;
		s++;
	}
	return (count);
}

