#include <stdio.h>
/*
 * main - Prints a string without using printf and puts
 * Return: 0
 *
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	fwrite(str1, 1, 59, stderr);
	return (0);
}
