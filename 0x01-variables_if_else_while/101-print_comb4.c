#include <stdio.h>

/**
 * main - Entry point
(*
 * Return: 0
 */

int	main(void)
{
	int	i;
	int	j;
	int	k;

	i = '0';
	j = '0';
	k = '0';
	while (i <= '7')
	{
		while (j <= '8')
		{
			{
				while (k <= '9')
				{
					if (i < j && j < k)
					{
						putchar(i);
						putchar(j);
						putchar(k);
						if (i == '7' && j == '8' && k == '9')
						{
							putchar('\n');
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
					k++;
				}
			}
			k = '0';
			j++;
		}
		j = '0';
		i++;
	}
	return (0);
}

