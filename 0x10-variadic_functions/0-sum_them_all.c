#include <stdarg.h>
/**
 * sum_them_all - sum of all its paramters
 * @n: integer var
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int add = 0;
	va_list sum;

	if (n == 0)
		return (0);
	va_start(sum, n);
	for (i = 0; i < n; i++)
	{
		add = add + va_arg(sum, int);
	}
	return (add);
}
