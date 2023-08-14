#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This function prints the name of the source file
 * from which it was compiled, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
