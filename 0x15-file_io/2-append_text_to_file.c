#include "holberton.h"
/**
 * appende_text_to_file - This function appends text at the end of a file.
 * @filename: is the name of the file
 * @text_content: is the NULL terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, cl, i;

	if (filename == NULL)
		return (-1);
	op = open(filename, O_WRONLY | O_APPEND);
	if (op == -1)
		return (-1);
      	if (text_content == NULL)
		i = 0;
	else
		while (text_content[i] != '\0')
			i++;
	wr = write(op, text_content, i);
	if (wr == -1)
		return (-1);
	cl = close(op);
	if (cl == -1)
		return (-1);
	return (1);			
}
