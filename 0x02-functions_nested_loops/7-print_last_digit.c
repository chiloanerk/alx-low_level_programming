#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @n: integer to be checked
 *
 * Return: n
 */
int print_last_digit(int n)
{
	int last = n % 10;

	if (n < 0)
	{
		last = -last;
	}
	_putchar(last + '0');
	return (last);
}
