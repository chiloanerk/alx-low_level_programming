#include "main.h"

/**
 * cap_string - captalises all words of a string
 * @str: input pointer var
 * Return: str
 */
char *cap_string(char *str)
{
	char seperators[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
		'{', '}'};
	int i, j, sepLen;

	sepLen = 13;
	i = 0;
	while (str[i])
	{
		j = 0;
		while (j < sepLen)
		{
			if ((str[i - 1] == seperators[j] || i == 0) &&
				(str[i] >= 'a' && str[i] <= 'z'))
			{
				str[i] = str[i] - 'a' + 'A';
				break;
			}
			j++;
		}
		i++;
	}
	return (str);
}

