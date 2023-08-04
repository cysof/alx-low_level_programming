#include "main.h"
/**
 * _strcmp - function that copies a string
 * @s1: first paramiter of the function
 * @s2: second paramiter of the function
 * Return: new string
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

