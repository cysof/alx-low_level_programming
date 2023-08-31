#include "unistd.h"
/**
 * _putchar - function the write char
 * @c: the char to be written
 * Return: Return 1 on success and -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
