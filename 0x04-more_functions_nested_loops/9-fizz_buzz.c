#include <stdio.h>
/**
 * main - This programm prints the numbers from 1 to 100
 * For multiples of three print Fizz.
 * For the multiples of five print Buzz.
 * For numbers which are multiples of both three and five print FizzBuzz.
 *
 * Return: Value 0.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		
		printf("%d ", num);
		
		if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else if ((num % 3 == 0) && (num % 5 == 0))
		{
			printf("FizzBuzz ");
		}
	}
	return (0);
}