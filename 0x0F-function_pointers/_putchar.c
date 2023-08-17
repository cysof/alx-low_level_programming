#include <unistd.h>
/**
 * _putchar - the character to write
 * @c: the character to be written
 * Return: return 1 on success.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
