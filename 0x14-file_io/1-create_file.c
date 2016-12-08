#include <fcntl.h>
#include <unistd.h>
#include "holberton.h"

/**
 * create_file - creates a file.
 * @filename: name of file.
 * @test_content: content to write to file.
 * Return: int, 1, on success.
 *           0, on failure.
 */

int create_file(const char *filename, char *test_content)
{
	size_t i;
	int fd;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 00600);
	if (fd == -1)
		return (-1);
	i = 0;
	while (test_content[i])
		i++;
	if (test_content == NULL)
		write(fd, NULL, 1);
	else
		write(fd, test_content, i);
	close(fd);
	return (1);
}
