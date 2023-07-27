#include "main.h"

/**
 * leet - Function that encodes a string into 1337.
 * @s: The string to be encoded.
 * Return: The encoded string.
 */
char *leet(char *s)
{
	char *letters = "aeotlAEOTL";
	char *leet_chars = "4307143071";
	int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; letters[j]; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = leet_chars[j];
				break;
			}
		}
	}
	return (s);
}
