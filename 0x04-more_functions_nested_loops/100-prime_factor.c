#include <stdio.h>
/**
 * main - print the prime factor of 612852475143
 *
 * Return: (0)
 */
int main(void)
{
	long int i, n, d;

	n = 612852475143;
	for (i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			if (n == i)
			{
				printf("%lu\n", i);
				break;
			}
			d = n / i;
			n = d;
		}
	}
	return (0);
}
