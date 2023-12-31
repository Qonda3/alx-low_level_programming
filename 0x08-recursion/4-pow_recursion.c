#include "main.h"
/**
 * _pow_recursion - value of x powered by y.
 * @x: base number.
 * @y: exponent.
 * Return: integer exponential number
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
