#include <stdio.h>
/**
 * main - Entry point
 * Return: 0
 */
int main(void)
{
	char az, AZ;

	for (az = 'a'; az <= 'z'; az++)
	{
		putchar(az);
	}
	for (AZ = 'A'; AZ <= 'Z'; AZ++)
	{
		putchar(AZ);
	}
	putchar('\n');
	return (0);
}
