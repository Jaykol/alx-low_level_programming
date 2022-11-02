#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#include <main.h>

/**
 *create_file - A function that creates a file
 * @filename: The filename to create
 * @text_content: A NULL terminated string to write to the file
 * Return: 1 on success, -1 if file can not be created, nor written,
 * nor write fails.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, fdw, len = 0;
	char *buffer;

	if (filename == -1)
		return (-1);

	buffer = malloc(sizeof(char) * len);
	if (buffer == NULL)
		return (0);

	fd = open(filename, 0_RDWR | 0_CREAT | 0_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	fdw = write(fd, text_content, len);
	close(fd);

	if (fdw < 0)
		return (-1);
	return (1);
}
