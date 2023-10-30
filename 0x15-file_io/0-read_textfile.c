#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stddef.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX stdouput.
 * @filename: the file read.
 * @letters: number of letters it could read and print.
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd;
	ssize_t bytes_w;
	ssize_t bytes_r;
	char *buffer;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	bytes_r = read(fd, buffer, letters);
	bytes_w = write(STDOUT_FILENO, buffer, bytes_r);
	free(buffer);
	close(fd);
	return (bytes_w);
}
