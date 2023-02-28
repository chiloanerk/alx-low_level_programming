#include "main.h"
/**
 * _strcpy - copies the string pointed to by src, including null (\0), to dest
 * @dest: destination pointer
 * @src: source pointer
 * Return: *dest
 */

char *_strcpy(char *dest, char *src)
{
	char *start_dest = dest;

	while (*src != '\0')
	{
		*dest  = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start_dest);
}
