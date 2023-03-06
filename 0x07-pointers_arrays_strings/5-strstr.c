#include "main.h"
#include <stdlib.h>
/**
 * _strstr - locates a substring
 * @haystack: string to search in
 * @needle: substring to search for
 *
 * Return: pointer to the beginning of substring, Null if not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, k;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = i, k = 0; needle[k] != '\0' && haystack[j] == needle[k]; j++, k++);
		if ( needle[k] == '\0')
			return (haystack + 1);
	}
	return (NULL);
}
