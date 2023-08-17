#include "variadic_functions.h"
/**
 * print_strings - function that print strings
 * @separator: string printed btw strings
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *x;

	va_list y;

	va_start(y, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(y, char *);

		if (x == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", x);
		}
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(y);
}
