#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - the function to read and write a file
 * @filename: the name of the file to read and write
 * @letters: the number of characters to read and write
 * Return: the number of characters that had been read and written
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fd = 0, char_read = 0, char_write = 0;

	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	char_read = read(fd, buf, letters);
	if (char_read == -1)
		return (0);
	char_write = write(STDOUT_FILENO, buf, char_read);
	if (char_write == -1)
		return (0);
	free(buf);
	close(fd);

	return (char_write);
}
