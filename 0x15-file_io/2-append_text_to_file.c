#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 *
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd = open(filename, O_APPEND | O_WRONLY), len = 0;

	if (!filename || fd == -1)
		return (-1);

	while (text_content && text_content[len] != '\0')
		len++;

	if (len)
		write(fd, text_content, len);

	return (1);
}
