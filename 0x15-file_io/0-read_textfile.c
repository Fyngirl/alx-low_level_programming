#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of file to be checked
 * @letters: to be read
 * Return: 0 if NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes_read, by_writ;
	int fd;
	char *buffer;

	if (filename == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);

	if (fd == -1)
	{
		return (0);
	}

	buffer = malloc(sizeof(char) * (letters + 1));
	if (buffer == NULL)
	{
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	buffer[bytes_read] = '\0';

	by_writ = write(STDOUT_FILENO, buffer, bytes_read);
	if (by_writ != bytes_read)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);

	return (bytes_read);
}
