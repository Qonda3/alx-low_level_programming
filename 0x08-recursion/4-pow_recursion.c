/**
 * _pow_recursion - x powered be y
 * @x: base value
 * @y: exponent value
 * Return: integer variable
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
