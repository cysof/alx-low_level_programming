#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - Locates the first occurrence in the string s of any
 *
 * @s: Pointer to the string to search.
 * @accept: Pointer to the string containing the bytes to search for.
 *
 * Return: Pointer to the byte in s that matches one of the bytes
 */
char *_strpbrk(char *s, char *accept)
{
	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		char *current_accept = accept;

		while (*current_accept != '\0')
		{
			if (*s == *current_accept)
			{
				return (s);
			}
			current_accept++;
		}
		s++;
	}
	return (NULL);
}
