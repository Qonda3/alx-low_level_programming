#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase character
 * @c: The integer to compare with
 * Return: 0 if character is lowercase
 */
int _islower(int c)
{
	int i = 97;
	int result = 0;

	while (i <= 122)
	{
		if (i == c)
		{
			result = 1;
		}
		i++;
	}
	return (result);
}
