#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char az;

	for (az = 'a'; az <= 'z'; az++)
	{
		if ((az == 'e' || az == 'q') != 1)
		{
			putchar(az);
		}
	}
	putchar('\n');
	return (0);
}
