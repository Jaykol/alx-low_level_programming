#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>

/**
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, fdw, i = 0;
	
	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);

	if (fd < 0)
		return (-1);
	if(text_content == NULL)
	{
		close(fd);
		return (1);
	}

	for (i,text_content[i] != 0, i++)
		;
	
	fdw = write(fd, text_content, i);
	
	close(fd);

	if(fdw < 0)
		return (-1);

	return (1);	
}
