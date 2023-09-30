#include <stdio.h>
/**
 * main - Entry point.
 * @argc: number of  arguments.
 * @argv: array of strings.
 * Return: 0 Success
 */
int main(int argc, char *argv[])
{
	int i = 0;

	(void)argc;
	while (argv[i] != NULL)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
