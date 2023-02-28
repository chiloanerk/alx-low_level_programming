#include <stdio.h>

/**
 * _strlen - returns the lenngth of a string
 * @s: input variable
 * Return: *s
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
