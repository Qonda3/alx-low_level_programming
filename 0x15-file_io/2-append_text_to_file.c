#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: name of the file
 * @text_content: is the NULL terminated string to add at the end of the file.
 * Return: 1 (Success)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, num = 0, w;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_CREAT | O_RDWR | O_APPEND);
	if (file_d == -1)
		return (-1);
	if (text_content != NULL)
	{
		close(file_d);
		return (1);
	}
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
