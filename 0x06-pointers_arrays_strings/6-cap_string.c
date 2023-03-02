#include "main.h"
/**
 * cap_string - captalises all words of a string
 * @str: input pointer var
 * Return: str
 */
char *cap_string(char *str)
{
	char seperators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"',
		'(', ')', '{', '}'};
	int i , j, sepLen;

	sepLen = 13;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (j < sepLen)
		{
			if ((str[j - 1] == seperators[j] || j == 0) &&
					(str[j] >= 97 && str[j] <= 122))
			{
				str[j] = str[j] - 32;
			}
			j++;
		}
		i++;
	}
	return (str);
}
