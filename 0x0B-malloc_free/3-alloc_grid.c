#include "holberton.h"
/**
 * alloc_grid - This function returns a pointer
 * to a 2 dimensional array of integers.
 * @width: int
 * @height: int
 * Return: arr
 */
int **alloc_grid(int width, int height) /*ancho - alto*/
{
	int i;
	int j;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}

	arr = malloc(height * sizeof(int *));

	if (arr == 0)
	{
		return ('\0');
	}
	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(width * sizeof(int));

		if (arr[i] == 0)
		{
			for (; i >= 0; i--)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
