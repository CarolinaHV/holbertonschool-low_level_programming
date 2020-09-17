#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - using if-else
 * This program will assign a random number to the variable n each
 * time it is executed and print the last digit of the number stored
 * in the variable n.
 * Return: Value 0
*/
int main(void)
{
	int n;
	int l_d;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l_d = n % 10;

	if (l_d > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, l_d);
	else if (l_d == 0)
		printf("Last digit of %i is %i and is 0\n", n, l_d);
	else
	 printf("Last digit of %i is %i and is less than 6 and not 0\n", n, l_d);
	return (0);
}
