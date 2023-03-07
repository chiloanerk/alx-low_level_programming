#include "main.h"
/**
 * print_chessboard - prints the chess board
 * @a: pointer to an 8x8 array representing a chessboard
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int i = 0;
	int j = 0;

	while (i < 8)
	{
		while (j < 8)
		{
			_putchar(a[i][j]);
			j++;
		}
		_putchar('\n');
		j = 0;
		i++;
	}
}
