#include <stdio.h>
/**
 * main - natural number
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 5 == 0) || (i % 3 == 0))
			sum += i;
	}
	printf("%d\n", sum);
	return (0);
}
