#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - COncatenates two strings.
 * @s1: The first string.
 * @s2: THe second string
 *
 * Return: A pointer to the concatenated string, or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *concatenated;
	unsigned int len1 = 0, len2 = 0, i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	len1 = strlen(s1);
	len2 = strlen(s2);

	concatenated = (char *) malloc(len1 + len2 + 1);

	if (concatenated == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
		concatenated[i] = s1[i];
	for (j = 0; j < len2; j++, i++)
		concatenated[i] = s2[j];
	concatenated[i] = '\0';
	return (concatenated);
}
