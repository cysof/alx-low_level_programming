#include "main.h"
/**
 * _strlen - return length
 * @s: string
 * Return: length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	return (len);
}

/**
 * append_text_to_file - function to write text
 * @filename: filename
 * @text_content: yext content
 * Return: return 1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	unsigned int length;
	ssize_t bytes_wt;

	if (filename == NULL)
		return (0);
	if (text_content == NULL)
		return (1);
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);
	length = _strlen(text_content);

	bytes_wt = write(fd, text_content, length);
	if (bytes_wt == -1)
		return (-1);
	close(fd);
	return (1);
}
