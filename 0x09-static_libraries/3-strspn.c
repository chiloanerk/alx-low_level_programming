#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to be searched
 * @accept: the string containing the characters to match
 *
 * Return: the number of chars in 's' which match chars from 'accept'
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, match;

	for (i = 0; s[i] != '\0'; i++)
	{
		match = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				match = 1;
				break;
			}
		}
		if (match == 0)
		{
			return (i);
		}
	}
	return (i);
}
