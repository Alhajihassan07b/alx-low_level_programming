#include <stdio.h>
/**
 * main - print out two digit number
 *
 * Return: always (0)
 *
 */
int main(void)
{
	int x, y;

	x = '0';
	y = '0';

	while (x <= '9')
	{
		while (y <= '9')
		{
			if (x < y)
			{
				putchar(x);
				putchar(y);
				if (x != '8' || (x == '8' && y != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			y++;
		}
		x++;
		y = '0';
	}
	putchar('\n');
	return (0);
}
