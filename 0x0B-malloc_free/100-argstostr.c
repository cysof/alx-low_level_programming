#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all the arguments of a program.
 * @ac: The number of arguments.
 * @av: An array of pointers to the arguments.
 *
 * Return: A pointer to the concatenated string, or NULL
 */

char *argstostr(int ac, char **av)
{
	int total_length;
	int i;
	int position;
	char *result;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	total_length = 0;
	for (i = 0; i < ac; i++)
	{
		total_length += strlen(av[i]) + 1;
	}
	result = (char *)malloc(total_length * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	position = 0;
	for (i = 0; i < ac; i++)
	{
		strcpy(result + position, av[i]);
		position += strlen(av[i]);
		result[position++] = '\n';
	}
	return (result);
}
