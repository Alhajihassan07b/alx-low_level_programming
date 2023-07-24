#include <stdio.h>
/**
 * main - print _putchar
 *
 * Return: (0)
 *
 */
int main(void)
{
	int x;
	char c[] = "_putchar";

	for (x = 0; x <= 7; x++)
	{
		putchar(c[x]);
	}
	putchar('\n');

	return (0);
}
