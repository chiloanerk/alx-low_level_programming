#include "main.h"
/**
 * puts2 - prints every other character of a string, from first character
 * @str: input variable
 * Return: void
 */

void puts2(char *str)
{
	int i;

	for (i = 0; *str; str ++)
	{
		if (i++ % 2 == 0)
			_putchar(*str);
	}
	_putchar('\n');
}
