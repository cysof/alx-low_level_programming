#include "main.h"

/**
 * rot13 - Function that encodes a string using rot13.
 * @str: The string to be encoded.
 *
 * Return: A pointer to the encoded string.
 */
char *rot13(char *str)
{
	char *start = str;
	char *rot13_table_lower = "abcdefghijklmnopqrstuvwxyz";
	char *rot13_table_upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (*str)
	{
		char *rot13_table;

		if ((*str >= 'a' && *str <= 'z'))
			rot13_table = rot13_table_lower;
		else if ((*str >= 'A' && *str <= 'Z'))
			rot13_table = rot13_table_upper;
		else
		{
			str++;
			continue;
		}
		*str = rot13_table[*str - 'a'];
		str++;
	}
	return (start);
}

