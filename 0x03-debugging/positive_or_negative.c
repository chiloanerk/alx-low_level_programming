#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * positive_or_negative - Entry point
 * @i: value to be checked
 * Return: 0
 */

void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("is positive");
	} else if (i == 0)
	{
		printf("is zero");
	} else if (i < 0)
	{
		printf("is negative");
	};
	printf("\n");
}
