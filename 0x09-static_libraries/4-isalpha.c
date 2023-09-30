#include <stdio.h>
#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: The integer to for comparison
 * Return: 1 if c is a letter
 */
int _isalpha(int c)
{
	int i = 65;
	int j = 97;
	int result = 0;

	while (j <= 122)
	{
		if (j == c)
		{
			result = 1;
		}
		j++;
	}
	while (i <= 90)
	{
		if (i == c)
		{
			result = 1;
		}
		i++;
	}
	return (result);
}
