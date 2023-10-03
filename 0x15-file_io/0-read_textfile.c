#include "main.h"
/**
 * read_textfile - function that read a text file
 * @filename: name of file
 * @letters: laters to be printed
 * Return: Always retun 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t bytes_rd, bytes_wt;

	if (filename == NULL)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters + 1);
	if (buf == NULL)
	{
		return (0);
	}
	bytes_rd = read(fd, buf, letters);
	if (bytes_rd == -1)
	{
		return (0);
	}
	buf[letters + 1] = '\0';
	close(fd);

	bytes_wt = write(STDOUT_FILENO, buf, bytes_rd);
	if (bytes_wt == -1)
	{
		return (0);
	}
	free(buf);
	return (bytes_rd);
}
