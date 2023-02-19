#include <stdio.h>

/**
 * main - Entry point
 * Return: 0
 */

int main(void)
{
	int i = 0;
	int j = 0;

	while (i < 100)
	{
		j = i;
		while (j < 100)
		{
			if (i != j)
			{
				putchar((i / 10) + '0');
				putchar((i % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');

				if (i == 98 && j == 99)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}
