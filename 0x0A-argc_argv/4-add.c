#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
/**
 * main - adds numbers.
 * @argc: number of arguments passed.
 * @argv: array of strings.
 * Return: 0 Success.
 */
int main(int argc, char *argv[])
{
	int i = 1, j, sum = 0;

	if (argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			sum = sum + atoi(argv[i]);
			i++;
		}
		printf("%d\n", sum);
		return (0);
	}
	printf("0\n");
	return (0);
}
