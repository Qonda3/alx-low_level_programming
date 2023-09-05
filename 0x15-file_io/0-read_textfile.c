#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <fcntl.h>
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output.
 * @filename: the file name that the function will read.
 * @letters: number of letters it should read.
 * Return: number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_d;
	ssize_t r, w;
	char *buffer;

	if (filename == NULL)
		return (0);
	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_d);
		return (0);
	}
	r = read(file_d, buffer, letters);
	if (r == -1)
	{
		close(file_d);
		free(buffer);
		return (0);
	}

	w = write(STDOUT_FILENO, buffer, r);
	if (w == -1)
	{
		close(file_d);
		free(buffer);
		return (0);
	}

	close(file_d);
	return (w);
}
