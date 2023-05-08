#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void close_file(int fd);
char *create_buffer(char *file);


/**
 * create_buffer - ...
 * @file: ...
 *
 * Return: ...
 */

char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: cannot write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - ...
 * @fd: ...
 */

void close_file(int fd)
{
	int d;

	d = close(fd);

	if (d == -1)
	{
		dprintf(STDERR_FILENO, "Error: cannot close fd %d\n", fd);
		exit(100);
	}
}


/**
 * main - ...
 * @argc: ...
 * @argv: ...
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int to, d, f, from;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: copy file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	f = read(from, buffer, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || f == -1)
		{
			dprintf(STDERR_FILENO,
					"Error: cannot read from file %s\n", argv[1]);
			exit(98);
		}
		d = write(to, buffer, f);
		if (to == -1 || d == -1)
		{
			dprintf(STDERR_FILENO, "Error: cannot write %s\n",
					argv[2]);
			free(buffer);
			exit(99);
		}
		f = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (f > 0);
	free(buffer);
	close_file(to);
	close_file(from);
	return (0);
}
