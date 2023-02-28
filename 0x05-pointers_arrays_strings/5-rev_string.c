#include "main.h"

/**
 * rev_string - reverse a string
 * @s: input variable
 * Return: void
 */

void rev_string(char *s)
{
	int i = 0;
	int j, k;

	while (*s != '\0')
	{
		i++;
		s++;
	}

	for (j = 0, k = i - 1; j < k; j++, k--)
	{
		char temp = s[j];

		s[j] = s[k];
		s[k] = temp;
	}
}
