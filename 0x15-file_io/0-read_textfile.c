#include "main.h"

/**
* read_textfile - reads a text file and prints it to the POSIX standard output
* @filename: name of the file to be read
* @letters: number of letters it should print
*
* Return: 0 if file cannot be opened or read
* 0 if filename is NULL
* 0 if write failes or does not return expected number of bytes
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t bytesrd, byteswr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	bytesrd = read(fd, buf, letters);
	byteswr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (byteswr);
}
