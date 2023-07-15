#include <stdio.h>
/**
 * main - print posible combination with two two digit
 *
 * Return: (0)
 *
 */
int main(void)
{
	int r, x, y, z;

	r = '0';
	x = '0';
	y = '0';
	z = '0';

	while (r <= '9')
	{
		while (x <= '9')
		{
			while (y <= '9')
			{
				while (z <= '9')
				{
					if (((y + z) > (r + x) && y >= r) || r < y)
					{
						putchar(r);
						putchar(x);
						putchar(' ');
						putchar(y);
						putchar(z);
						if (r + x + y + z == '179' && r == '9')
						{
							break;
						}
						else
						{
							putchar(',');
							putchar(' ');
						}
					}
					z++;
				}
				y++;
				z = '0';
			}
			x++;
			y = '0';
		}
		r++;
		x = '0';
	}
	putchar('\n');
	return (0);
}
