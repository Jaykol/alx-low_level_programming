#include "main.h"

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/uio.h>
#include <stdlib.h>


/**
 * read_textfile - Reads a textfile and prints to POSIX stdout
 * @filename: name of files char string
 * @letters: number of letters tobe read and printed
 * Return: 0 if error and number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, r_count, w_count;
	char *buffer;
	
	if (filename == NULL)
	{
		return (0);
	}

	
	fd = open(filename, 0_RDONLY);

	if (fd == -1)
	{
		return (0);
	}
	
	buffer = malloc(size0f(char) * letters);
	if (buffer == NULL)
	{
		return (0);
	}

	r_count = read(fd, buffer, letters);
	
	if (r_count == -1)
	{
		free(buffer);
		return (0);
	}

	W_count = write(STDOUT_FILENO, buffer, r_count);
	if (w_count == -1)
		return (0);

	free(buffer);

	close(fd);
	return (w_count);
}
