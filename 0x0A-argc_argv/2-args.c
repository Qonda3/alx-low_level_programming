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
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
