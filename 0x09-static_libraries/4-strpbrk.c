#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string to search
 * @accept: the set of bytes to search for
 *
 * Return: a pointer to the byte in 's' that matches or NULL if not found
 */
char *_strpbrk(char *s, char *accept)
{
	char *p;

	while (*s != '\0')
	{
		for (p = accept; *p != '\0'; p++)
		{
			if (*s == *p)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
