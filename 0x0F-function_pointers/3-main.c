#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - perform calculator function
 * @argc: argument count
 * @argv: argument vector
 * Return: result of calc
 */
int main(int argc, char *argv)
{
	int num1, num2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[i]);
	op = (argv[2]);
	num2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[i] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*op == '/' && num2 == 0) || (*op == '%' && num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(op) (num1, num2));
	return (0);
}
