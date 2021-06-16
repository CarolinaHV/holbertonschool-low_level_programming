#include <math.h>
#include "search_algos.h"
/**
 * jump_search - This function searches for a value in a
 * sorted array of integers using the Jump search algorithm
 * @array: The size of the array we are looking through
 * @size: The size of the array
 * @value: The value that the function is trying to find.
 * Return: The index of the value or -1
 */
int jump_search(int *array, size_t size, int value)
{
	int jump;
	int lower;
	int higher;
	int i;
	char *message;

	if (array == NULL)
		return (-1);
	jump = sqrt(size);

	for (i = 0; i < (int)size; i += jump)
	{
		if (value <= array[i])
		{
			lower = i - 3;
			higher = i;
			message = "Value found between indexes";
			printf("%s [%d] and [%d]\n", message, lower, higher);
			break;
		}
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	if (i > (int)size)
	{
		lower = i - jump;
		higher = lower;
		message = "Value found between indexes";
		printf("%s [%d] and [%d]\n", message, lower, i);
	}

	for (i = lower; i <= higher; i++)
	{
		printf("Value checked array[%d] = [%d]\n", lower, array[i]);
		if (value == array[i])
			return (i);
	}
	return (-1);
}
