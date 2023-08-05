#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: number of command-line arg passed
 * @argv: array of char pointer
 * Return: integer
 */
int main(int argc, char *argv[])
{
	(void)argc;
	if (argc > 1)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
