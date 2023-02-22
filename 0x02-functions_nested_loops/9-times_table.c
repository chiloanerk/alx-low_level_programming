#include "main.h"
/**
 * times_table - entry point
 * Return: void
 */
void times_table(void)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			k = i * j;

			if (j == 0)
			{
				_putchar(k + '0');
			}
			if (k <= 9 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(k + '0');
			}
			else if (k >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((k / 10) + '0');
				_putchar((k % 10) + '0');
			}
			j++;
		}
		j = 0;
		_putchar('\n');
		i++;
	}
}
