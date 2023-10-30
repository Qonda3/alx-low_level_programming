#include <stddef.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - appends text at the end of a file.
 * @filename: file name.
 * @text_content: text to append
 * Return: 1 on success and -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_w, len = 0;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	if (text_content != NULL)
	{
		len = 0;
		while (text_content[len])
			len++;
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	bytes_w = write(fd, text_content, len);

	if (fd  == -1)
		return (-1);
	if (bytes_w == -1)
		return (-1);
	close(fd);
	return (1);
}
