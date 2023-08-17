#include "variadic_functions.h"
/**
 * print_numbers - print the integers
 * @separator: string to be printed
 * @n: number of integers
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, x;

	va_list ptr;

	va_start(ptr, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(ptr, const unsigned int);
		printf("%d", x);

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
