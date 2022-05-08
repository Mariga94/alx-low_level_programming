#include "main.h"
#include <unistd.h>
#include <fcntl.h>

/**
 * create_file-function that creates a file
 * @filename: name of the file
 * @text_content: content of the file
 *
 * Return: 1 on Success -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int len;
	int fd, wr;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
		fd = open(filename, O_WRONLY | O_CREATE, 0600);
		if (fd == -1)
			return (-1);
		return (1);
	}

	fd = open(filename, O_WRONLY | O_CREATE | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	return (-1);
	for (len = 0; text_content[len]; len++)
	{}
	wr = write(fd, text_content, len);
	if (wr == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
