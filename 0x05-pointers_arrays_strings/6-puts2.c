#include "main.h"
/**
 * puts2 - prints every other character of a string, from first character
 * @str: input variable
 * Return: void
 */

void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
