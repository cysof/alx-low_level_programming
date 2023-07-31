#include "main.h"
#include <stddef.h>

/**
 * _strstr - Finds the first occurrence of the substring needle.
 *
 * @haystack: Pointer to the string to search in.
 * @needle: Pointer to the substring to find.
 *
 * Return: Pointer to the beginning of the located substrin
 */

char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		char *hay = haystack;
		char *need = needle;
		
		while (*need != '\0' && *hay == *need)
		{
			hay++;
			need++;
		}
		if (*need == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
