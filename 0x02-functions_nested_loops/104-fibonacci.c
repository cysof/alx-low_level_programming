#include <stdio.h>
/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0.
 */

/**
 * void- entry poin to function
 * description: and prints the Fibonacci sequence up to a given number n.
 *
 * @param n The number of Fibonacci numbers to generate and print.
 */

void fibonacci_sequence(int n)
{
	int a = 1;
	int b = 2;
	int next_number;

	printf("%d, %d", a, b);

	for (int i = 3; i <= n; i++)
	{
		next_number = a + b;
		printf(", %d", next_number);
		a = b;
		b = next_number;
	}
	printf("\n");
}

int main(void)
{
	fibonacci_sequence(98);
	return (0);
}

