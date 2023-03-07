#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the two diagonals of a square matrix.
 * @a: pointer to the matrix
 * @size: size of diagonal
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int i = 0;
	int sum_main_diag = 0;
	int sum_sec_diag = 0;

	while (i < size * size)
	{
		if (i % (size + 1) == 0) /* check if element is on main diagonal*/
		{
			sum_main_diag += a[i];
		}
		if (i % (size - 1) == 0 && i != 0 && i != size * size - 1)
		{
			sum_sec_diag += a[i];
		}
		i++;
	}
	printf("%d, ", sum_main_diag);
	printf("%d\n", sum_sec_diag);
}
