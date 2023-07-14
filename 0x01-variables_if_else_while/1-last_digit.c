#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - print the last digit of random number
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastd = n % 10;

	if (n > 5)
	{
		printf("%d is greater than 5\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is less than 6 and not 0\n", n);
	}
	return (0);
}
