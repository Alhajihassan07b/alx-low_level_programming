#include "variadic_functions.h"
/**
 * sum_them_all - function that sum of them all
 * @n: number of all
 * Return: sum of all
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list x;

	va_start(x, n);

	for (i = 0; i < n; i++)
	{
		if (n == 0)
		{
			return (0);
		}
		else
		{
			sum += va_arg(x, const unsigned int);
		}
	}
	va_end(x);
	return (sum);
}
