#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * is_whitespace - Checks if a character is a whitespace character.
 * @c: The character to check.
 *
 * Return: 1 if the character is whitespace, 0 otherwise.
 */
int is_whitespace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words in the string.
 */
int count_words(char *str)
{
	int word_count = 0;
	int in_word = 0;

	while (*str)
	{
		if (is_whitespace(*str))
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			in_word = 1;
			word_count++;
		}
		str++;
	}
	return (word_count);
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words), or NULL on failure.
 */
char **strtow(char *str)
{
	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	int num_words = count_words(str);
	char **words = (char **)malloc((num_words + 1) * sizeof(char *));

	if (words == NULL)
	{
		return (NULL);
	}
	int word_index = 0;
	int word_length = 0;
	int in_word = 0;

	for (int i = 0; str[i]; i++)
	{
		if (!is_whitespace(str[i]))
		{
			if (!in_word)
			{
				in_word = 1;
				word_length = 0;
				words[word_index] = &str[i];
				word_index++;
			}
			word_length++;
		}
		else
		{
			in_word = 0;
			str[i] = '\0';
		}
	}
	words[num_words] = NULL;
	return (words);
}

