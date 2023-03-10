#include "main.h"
#include <stdlib.h>
/**
 * _strchr - locates a character in a string, first occurance
 * @s: string variable
 * @c: character to be checked
 *
 * Return: c pointer if charcter is found, NULL if not
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return (NULL);
}
