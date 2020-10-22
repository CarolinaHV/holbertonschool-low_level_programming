#include "3-calc.h"
/**
 * main - Calculator
 * @argc: number of parameters
 * @argv: string of parameters
 * Return: Value 0
 */
int main(int argc, char *argv[])
{
	int a;
	int b;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*argv[2] != '*' && *argv[2] != '+' && *argv[2] != '-' &&
	    *argv[2] != '/' && *argv[2] != '%')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	printf("%d\n", get_op_func(argv[2])(a, b));
	return (0);
}
