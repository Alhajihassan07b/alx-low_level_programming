#include <stdio.h>
/**
 * main - use putchar to print base ten
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int i;

	for (i = 0; i < 9; i++)
	{
		putchar(i + 48);
	}
	putchar('\n');
	return (0);
}
