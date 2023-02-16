#include <stdio.h>
/**
 * main - Program that prints the size of various types
 * Return: 0
 */
int main(void)
{
	char charType;
	int intType;
	long int longIntType;
	long long int longlongIntType;
	float floatType;

printf("Size of a char: %zu byte(s)\n", sizeof(charType));
printf("Size of an int: %zu byte(s)\n", sizeof(intType));
printf("Size of a long int: %zu byte(s)\n", sizeof(longIntType));
printf("Size of a long long int: %zu byte(s)\n", sizeof(longlongIntType));
printf("Size of a float: %zu byte(s)\n", sizeof(floatType));
return (0);
}
