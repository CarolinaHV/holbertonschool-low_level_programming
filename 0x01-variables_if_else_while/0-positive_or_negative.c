#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Using if-else
 *
 * This program will assign a random number to the variable n each time
 * it is executed.  The variable n will store a different value every time
 * you will run this program.
 *
 * Return: Value 0
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is zero\n", n);
	return (0);
}
