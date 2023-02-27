#include <stdio.h>
/**
 * reset_to_98- takes a pointer to an int and updates the value it points to 98
 * @n: value to be checked
 * Return: n
 */

void reset_to_98(int *n)
{
	int *p = n;
	*p = 98;
}
