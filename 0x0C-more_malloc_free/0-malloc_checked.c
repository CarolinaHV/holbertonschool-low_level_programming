#include "holberton.h"
/**
 * malloc_checked - This function allocates memory using malloc
 * @b: Memory direction
 * Return: dir
 */
void *malloc_checked(unsigned int b)
{
	void *dir;

	dir = malloc(b);

	if (dir == NULL)
	{
		exit(98);
	}
	return (dir);
}
