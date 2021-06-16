#include <stdio.h>
#include "search_algos.h"

/**
 * interpolation_search - This function searches for a value in
 * a sorted array of integers using the Interpolation search algorithm
 * @array: The pointer to the first element of the array to search in
 * @size: The number of elements in array
 * @value: The value to search
 * Return: Value in array or -1
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t pos;
	size_t high = size - 1;
	size_t low = 0;

	if (!array)
		return (-1);


	while (low <= high)
	{

		pos = low + (((double)(high - low) /
			      (array[high] - array[low])) * (value - array[low]));

		if (pos > size - 1)
		{
			printf("Value checked array[%lu] is out of range\n", pos);
			break;
		}
		else
			printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return ((int)pos);

		if (value < array[pos])
			high = pos - 1;
		else
			low = pos + 1;

	}
	return (-1);
}
