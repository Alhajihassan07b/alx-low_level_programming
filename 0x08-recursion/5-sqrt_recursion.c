#include "main.h"
/**
 * sqrt_a - return natural number
 * @a: input
 * @b: input
 * Return: square root
 *
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}

#include "main.h"
/**
 * _sqrt_recursion - Entry point
 * @n: input
 * Return: (0)
 *
 */
int _sqrt_recursion(int n)
{
	return (sqrt_a(n, 0));
}
