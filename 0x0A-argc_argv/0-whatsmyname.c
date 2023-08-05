#include <stdlib.h>
#include <stdio.h>
/**
 * main - Entry point
 * @argc: number of command-line arg passed.
 * @argv: array of char pointers
 * Return: integer
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
