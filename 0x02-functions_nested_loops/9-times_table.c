#include "main.h"
/**
 * times_table - entry point
 * Return: void
 */
void times_table(void)
{
	int i = 0;
	int j = 0;

	while (i < 10)
	{
		while (j < 10)
		{
			int k = i * j;

			if (j == 0)
			{
				_putchar('0');
				_putchar(' ');
			}
			else if (k < 10)
			{
				_putchar(k + '0');
				_putchar(' ');
			}
			else
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			j++;
		}
		j = 0;
		_putchar('\n');
		i++;
	}
}
