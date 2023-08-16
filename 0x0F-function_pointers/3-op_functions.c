#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - add two integer
 * @a: first int
 * @b: second int
 * Return: a + b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two integer
 * @a: first input
 * @b: second input
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multply two integer
 * @a: input
 * @b: input
 * Return: a * b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two integer
 * @a: input
 * @b: input
 * Return: a / b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - module a and b
 * @a: input
 * @b: input
 * Return: a % b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
