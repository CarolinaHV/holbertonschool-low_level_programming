#include "variadic_functions.h"
/**
 * print_numbers - This function prints numbers, separated by a comma
 * and followed by a new line.
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 * Return: parameters
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int nums;

	va_list parameters;

	va_start(parameters, n);

	for (i = 0; i < n; i++)
	{
		nums = va_arg(parameters, int);
		printf("%d", nums);

		if (i < n - 1 && separator)
		{
			printf("%s", separator);
		}
	}
	va_end(parameters);
	printf("\n");
}
