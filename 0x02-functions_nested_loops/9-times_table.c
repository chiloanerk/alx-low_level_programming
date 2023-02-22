#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 *
 * Return: void
 */

void times_table(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			if (i == 0 || j == 0)
			{
				_putchar('0');
				_putchar(' ');
			}
			else
			{
				int k = i * j;

				if (j < 10)
				{
					_putchar(k + '0');
					_putchar(' ');
				}
				else
				{
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
