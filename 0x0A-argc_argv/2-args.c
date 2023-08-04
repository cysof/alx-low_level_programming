#include <stdio.h>
/**
 * main - prints all arguments it receives
 * @argc: arguments count
 * @argv: arguments vectors
 * Return: always return 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);
	return (0);
}
