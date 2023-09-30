#include <unistd.h>
/**
 * _putchar - function to write a single char
 * @c: char to be written
 * Return: return 1 on sucess
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
