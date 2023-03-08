#include "main.h"

/**
 * is_actual_prime - helper function that checks if a number is prime
 * @n: number to check for primality
 * @divisor: current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_actual_prime(int n, int divisor)
{
	if (divisor == 1)
		return (1);

	if (n % divisor == 0 && divisor > 0)
		return (0);

	return (is_actual_prime(n, divisor - 1));
}

/**
 * is_prime_number - checks if a number is prime
 * @n: number to check for primality
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_actual_prime(n, n - 1));
}

