#include "main.h"

/**
 * wildcmp - Compares two strings and returns 1 if they are identical,
 *           considering the special character * in s2.
 * @s1: The first string to be compared.
 * @s2: The second string to be compared, which can contain the speci.
 *
 * Return: 1 if the strings can be considered identical, otherwise return 0.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s2 == '*')
	{
		if (*s1 == '\0')
			return (wildcmp(s1, s2 + 1));

		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	}

	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}

