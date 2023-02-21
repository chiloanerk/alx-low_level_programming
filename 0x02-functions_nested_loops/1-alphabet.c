#include "main.h"
/**
 * main - funciton that prints the alphabet in lower case
 * Return: void
 */
void print_alphabet(void);

void print_alphabet(void)
{
	char c = 'a';
	
	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}

