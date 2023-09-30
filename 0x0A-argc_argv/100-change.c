#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point.
 * @argc: number of arguments passed.
 * @argv: string of string.
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int c, coin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	c = atoi(argv[1]);
	if (c < 0)
	{
		printf("0\n");
		return (0);
	}
	for ( ; c > 0; )
	{
		if (c >= 25)
		{
			c = c - 25;
		}
		else if (c >= 10)
		{
			c = c - 10;
		}
		else if (c >= 5)
		{
			c = c - 5;
		}
		else if (c >= 2)
		{
			c = c - 2;
		}
		else
		{
			c = c - 1;
		}
		coin++;
	}
	printf("%d\n", coin);
	return (0);
}
