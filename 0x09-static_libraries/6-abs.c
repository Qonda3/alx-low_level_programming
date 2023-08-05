#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @a: The integer of the parameter
 *
 * Return: result integer
 */
int _abs(int a)
{
	int res = 0;

	if (a < 0)
	{
		res = a / -1;
	}
	else
	{
		res = a;
	}
	return (res);
}

