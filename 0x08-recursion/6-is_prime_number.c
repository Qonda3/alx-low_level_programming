#include "main.h"
/**
 * prime - calculate prime number.
 * @n: input number.
 * @m: incremented number.
 * Return: 1 if the input is a prime number.
 */
int prime(int n, int m)
{
	if (m == n)
		return (1);
	if (n % m == 0)
		return (0);
	return (prime(n, m + 1));
}
/**
 * is_prime_number - prime number.
 * @n: input integer.
 * Return: (1) if prime number either (0).
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, 2));
}
