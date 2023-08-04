#include <stdio.h>
/**
 * main - print the number of arguments passed
 * @argc: Arguments count
 * @argv: Arguments vector
 * Return: Always return 0;
 */

int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc -1);
	return (0);
}
