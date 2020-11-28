#include "holberton.h"
/**
 * reverse_array - This function reverses the content
 * of an array of integers.
 * @a: Array of integers
 * @n: Number of elements of the array
 * Return: Value 0
 */
void reverse_array(int *a, int n)
{
	int rev;
	int i = 0;

	/*while (a[n] != '\0')
	{
		n++;
		}*/

	for (rev = 0; rev < n / 2; rev++)
	{
		i = a[rev];
		a[rev] = a[n - 1 - rev];
		a[n - rev - 1] = i;
	}
}
