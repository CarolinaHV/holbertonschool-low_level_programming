#include "holberton.h"
/**
 * read_textfile - This function that reads a text file
 * and prints it to the POSIX standard output.
 * @filename: Name of file
 * @letters: Is the size of text
 * Return: value 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t readtext, wrprint;

	fd = open(filename, O_RDONLY);

	if(fd == -1)
	{
		return(0);
	}
	if(filename == NULL)
	{
		return(0);
	}

	buf = malloc(letters * sizeof(char));
	if(buf == NULL)
	{
		return(0);
	}

	readtext = read(fd, buf, letters);
	if(readtext == -1)
	{
		return(0);
	}
	close(fd);


	wrprint = write(STDOUT_FILENO, buf, readtext);

	if(wrprint == -1 || readtext != wrprint)
	{
		return(0);
	}
	
	return(wrprint);
}
