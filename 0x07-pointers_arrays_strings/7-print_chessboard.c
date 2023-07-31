#include "main.h"

/**
 * print_chessboard - Prints the chessboard represented by a 2D array.
 *
 * @a: Pointer to a 2D array representing the chessboard.
 */

void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
			_putchar(' ');
		}
		_putchar('\n');
	}
}
