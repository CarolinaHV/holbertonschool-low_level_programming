#include "variadic_functions.h"
/**
 * print_strings - This function prints strings, followed by a new line.
 * @separator:  String to be printed between the strings
 * @n: Number of strings passed to the function.
 * Return: parameters
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list parameters;
	char *name;

	va_start(parameters, n);

	for (i = 0; i < n; i++)
	{
		name = va_arg(parameters, char*);
		if (name == '\0')
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", name);
			if (i < n - 1 && separator)
			{
				printf("%s", separator);
			}
		}
	}
	va_end(parameters);
	printf("\n");
}
