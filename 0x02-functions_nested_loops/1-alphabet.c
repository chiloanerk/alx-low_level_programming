#include "main.h"
/**
 * main - funciton that prints the alphabet in lower case
 * Return: void
 */

void print_alphabet(void)
{
	char str = 'a';
	
	while (str <= 'z')
	{
		_putchar(str);
		str++;
	}
	_putchar('\n');
}
