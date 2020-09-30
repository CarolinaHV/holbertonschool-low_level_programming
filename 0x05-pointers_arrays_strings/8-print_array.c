#include "holberton.h"
/**
 * print_array - This function prints n elements of an array of integers
 * @a: Pointer of the array of integers
 * @n: Number of elements
 * Return: Value 0
 */
void print_array(int *a, int n)
{
	int i;

	if (n != 0)
	{
		for (i = 0; i < n; i++)
		{
			printf("%d", a[i]);
			if (i < n - 1)
			{
				printf(", ");
			}
		}
		printf("\n");
	}
}
