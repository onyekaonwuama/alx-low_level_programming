#include "main.h"
#include <stdio.h>

/**
 * main - copies contents of one file to other file
 * @ac: number of arguments
 * @av: argument vector
 * Return: 0 for success
 */
int main(int ac, char **av)
{
	int file_from, file_to, read_from;
	char buf[1024];

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", av[1]), exit(98);

	file_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);

	while ((read_from = read(file_from, buf, 1024)) > 0)
	{
		if (file_to < 0 || (write(file_to, buf, read_from) != read_from))
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}

	if (read_from == -1)
		dprintf(STDERR_FILENO, "Error; Can't read from %s\n", av[1]), exit(98);

	if ((close(file_from)) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);

	if ((close(file_to)) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);

	return (0);
}
