#include "main.h"
#include <stdlib.h>
#include <stdio.h>

char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - the functon to create a buffer
 * @file: the file to write to
 * Return: the buffer created or exit with 99 on failure
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}
/**
 * close_file - the function to close the files
 * @fd: the file descriptor to close a particular file
 */
void close_file(int fd)
{
	int c;

	c = close(fd);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - the entry point of the program
 * @argc: the argument counter variable
 * @argv: the  arguments passed to program at commad line
 * Return: always return 0 on success
 */
int main(int argc, char *argv[])
{
	int from, to, r, w;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	r = read(from, buf, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		w = write(to, buf, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		r = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (r > 0);

	free(buf);
	close_file(from);
	close_file(to);

	return (0);
}
