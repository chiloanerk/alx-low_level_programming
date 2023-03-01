#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: destination var
 * @src: source var string
 * @n: n number of bytes
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
