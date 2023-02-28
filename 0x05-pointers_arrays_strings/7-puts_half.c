#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: input variable
 * Return: void
 */

void puts_half(char *str)
{
	int len = 0;
	int j;

	while (str[len] != '\0')
	{
		len++;
	}

	for (j = (len + 1) / 2; j < len; j++)
	{
		_putchar(str[j]);
	}
	_putchar('\n');
}
