#include "main.h"
/**
 * _strncat - concatenates two strings
 * @dest: destination var
 * @src: source var string
 * @n: n number of bytes
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	return (dest);
}
