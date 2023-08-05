#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * @argc: number of command-line arg passed.
 * @argv: array of character pointers.
 * Return: integer
 */
int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);
	return (0);
}
