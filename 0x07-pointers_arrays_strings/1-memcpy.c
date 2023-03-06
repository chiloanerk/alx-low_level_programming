#include "main.h"
/**
 * _memcpy - copies memory area
 * @dest: destination area pointer
 * @src: source area pointer to be copied
 * @n: number of bytes as unsigned int
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
