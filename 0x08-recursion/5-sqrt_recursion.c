#include "main.h"
int find_sqrt_helper(int n, int low, int high);
/**
 * _sqrt_recursion - Finds the square root of a number using recursion
 * @n: the number to find the square root of
 *
 * Return: the square root of n, or -1 if n is negative
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_sqrt_helper(n, 0, n));
}

/**
 * find_sqrt_helper - Recursive helper function to find sqare root of a number
 * @n: the number to find the square root of
 * @low: the lower bound of the search
 * @high: the upper bound
 *
 * Return: the square root of n if found, or -1 if not found
 */

int find_sqrt_helper(int n, int low, int high)
{
	int mid;

	if (low > high)
		return (-1);
	mid = (low + high) / 2;

	if (mid * mid == n)
		return (mid);
	else if (mid * mid > n)
		return (find_sqrt_helper(n, low, mid - 1));
	else
		return (find_sqrt_helper(n, mid + 1, high));
}
