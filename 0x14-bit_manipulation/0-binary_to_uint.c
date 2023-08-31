#include "main.h"
/**
 * binary_to_uint - a program that converts binary numbers
 * to integers/decimal numbers
 *
 * @b: a character pointer to a string containing the
 * binary numbers
 *
 * Return: the converted decimal (output)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len;
	size_t x = 0;
	size_t sum = 0;
	int base = 2;

	if (b == NULL)
		return (0);

	for (len = 0; b[len] != '\0'; len++)
		;

	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);

		sum = sum * base + (b[x] - '0');
	}

	return (sum);
}
