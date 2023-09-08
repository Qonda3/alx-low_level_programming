#include "main.h"
#include <stddef.h>
#include <fcntl.h>
#include <stdlib.h>
/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: is a NULL terminated string to write to the file
 * Return: 1 (Success)
 */
int create_file(const char *filename, char *text_content)
{
	int file_d, num = 0, w;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (text_content == NULL)
	{
		close(file_d);
		return (1);
	}
	if (file_d == -1)
		return (-1);
	while (text_content[num] != '\0')
		num++;
	w = write(file_d, text_content, num);
	if (w == -1)
	{
		close(file_d);
		return (-1);
	}
	close(file_d);
	return (1);
}
