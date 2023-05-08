#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - ...
 * @filename: ...
 * @letters: ...
 *
 * Return: 0 when function fails or filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t d;
	ssize_t fd;
	ssize_t f;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	d = read(fd, buf, letters);
	f = write(STDOUT_FILENO, buf, d);
	free(buf);
	close(fd);
	return (f);
}
