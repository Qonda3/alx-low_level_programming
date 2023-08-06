#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of command-line arg passed
 * @argv: array of char pointers
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int sum = 0;

	while (i < argc)
	{
		if (atoi(argv[i]) >= 'a' && atoi(argv[i]) <= 'z')
		{
			printf("Error\n");
			return (1);
		}
		if (atoi(argv[i]) >= 'A' && atoi(argv[i]) <= 'Z')
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
