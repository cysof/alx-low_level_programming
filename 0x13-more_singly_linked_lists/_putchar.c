#include <unistd>
/**
 * _putchar - the function the print char
 * @c: character to be printed
 * Return: return 1 on success and -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
