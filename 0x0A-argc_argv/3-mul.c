#include <stdio.h>
#include <stdlib.h>
/**
 * main - program to print multiple of twp numbers
 * @argc: Argument count
 * @argv: Argument vector
 * Return: always return 0.
 */
int main(int argc, char *argv[])
{
	int num1, num2, mul;

	if (argc != 3)
	{
		printf("Error \n");
		return (0);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);
		mul = num1 * num2;
		printf("%d\n", mul);
	}
	return (0);
}
