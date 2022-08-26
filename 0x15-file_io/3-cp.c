#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int main(int  ac, char **av)
{
	int fd_from, fd_to, rfrm, w_to;
	char *buf;
	
	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = malloc(sizeof(char) * 1024);
	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	fd_from = open(av[1], O_RDONLY);
	rfrm = read(fd_from, buf, 1024);
	if (fd_from == -1 || rfrm == -1)
	{
		dprintf(STDERR_FILENO,
			       	"Error: Can't read from	file %s \n", av[1]);
		exit(98);
	}
	fd_to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	w_to = write(fd_to, buf, rfrm);
	if (fd_to == -1 || w_to == -1)
	{
		dprintf(STDERR_FILENO, 
				"Error: Can't write to file %s\n", av[2]); 
		free(buf);
		exit(99);
	}
	fd_from = close(fd_from);
	fd_to = close(fd_to);
	if (fd_from == -1 || fd_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd%d", fd_from);
		exit (100);
	}
	return  (0);
}
