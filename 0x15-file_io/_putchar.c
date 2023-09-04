#include <unistd.h>

/**
 * _putchar - function to write character
 * @c: character to be writen
 * Return: Always return 1 on succes and -1 on fail
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
