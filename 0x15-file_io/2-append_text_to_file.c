#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * append_text_to_file - appends text to a file
 * @filename: the name of the file
 * @text_content: the string to append to file
 *
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written = 0, text_len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[text_len])
			text_len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_len > 0)
	{
		bytes_written = write(fd, text_content, text_len);
		if (bytes_written != text_len)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
