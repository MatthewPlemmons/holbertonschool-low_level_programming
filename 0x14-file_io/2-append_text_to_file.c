#include <fcntl.h>
#include <unistd.h>
#include <errno.h>
#include "holberton.h"

/**
 * append_text_to_file - appends text to end of a file.
 * @filename: name of file.
 * @test_content: content to append.
 * Return: int, 1, on success.
 *           0, on failure.
 */

int append_text_to_file(const char *filename, char *test_content)
{
	size_t i;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND, 00600);
	if (fd == -1)
	{
		if (errno = EACCES)
			return (-1);
		return (-1);
	}
	i = 0;
	while (test_content[i])
		i++;
	if (test_content != NULL)
		write(fd, test_content, i);
	close(fd);
	return (1);
}
