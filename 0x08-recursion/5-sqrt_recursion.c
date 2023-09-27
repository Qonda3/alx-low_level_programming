#include "main.h"

/**
 * _sqrt - calc sqrt root of a number
 * @m: integer.
 * @i: integer.
 *
 * Return: result
 */
int _sqrt(int n, int now, int last)
{
	int prior;

	prior = now * now;
	if (prior > n)
		return (last);
	if (prior == n)
		return (now);
	return (_sqrt(n, now + 1, now));
}
/**
 * _sqrt_recursion - natural square root of a number.
 * @n: integer value.
 * Return: square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return _sqrt(n, 0, 0);
}
