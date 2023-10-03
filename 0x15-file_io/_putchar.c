#include <unistd.h>
/**
 * _putchar - function to write a signle char
 * @c: character to be writem
 * Return: 1 on success and -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
