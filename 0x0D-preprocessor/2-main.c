#include <stdio.h>
/**
 * main - This program prints the name of the file it
 * was compiled from, followed by a new line.
 *
 * Return: Value 0
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
