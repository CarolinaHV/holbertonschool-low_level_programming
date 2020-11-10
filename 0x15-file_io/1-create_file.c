#include "holberton.h"
/**
 * create_file - This function that creates a file.
 * @filename: Name of file
 * @text_content: size of text
 * Return: Value 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t lng = 0;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		return (1);
	}
	while (text_content[lng] != '\0')
	{
		lng++;
	}
	write(fd, text_content, lng);
	close(fd);

	return (1);
}
