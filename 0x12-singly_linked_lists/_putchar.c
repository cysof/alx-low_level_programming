#include <unistd.h>
/**
 * _putchar - function to print character
 * @c: the character to be printed
 * Return: Always return 1 on success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
