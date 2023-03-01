#include "main.h"
/**
 * _strcmp - copies a string
 * @s1: pointer to string var
 * @s2: pointer to string var
 * Return: An integer less than, equal to, or greater than zero if s1 is found
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
	s1++;
	s2++;
	}

	return (*s1 - *s2);
}
