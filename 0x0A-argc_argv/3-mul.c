#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of arguments passed
 * @argv: array of strings
 * Return: Success (0)
 */
int main(int argc, char *argv[])
{
	int product;

	if (argc < 3)
	{
		printf("Error\n");
		return (0);
	}
	product = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", product);

	return (0);
}
