#include "main.h"
int find_sqrt_recursive(int n, int i);
/**
 * _sqrt_recursion - Returns the natural square root of a number
 *
 * @n: Number to calculate the square root of
 *
 * Return: The resulting square root or -1 if n is negative
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt_recursive(n, 0));
}

/**
 * find_sqrt_recursive - Recursively finds the natural square root of a number
 *
 * @n: Number to calculate the square root of
 * @i: Iterator
 *
 * Return: The resulting square root or -1 if n doesn't have a natural
 * square root
 */

int find_sqrt_recursive(int n, int i)
{
	if ((i * i) > n)
		return (-1);

	if ((i * i) == n)
		return (i);

	return (find_sqrt_recursive(n, i + 1));
}

