#include "main.h"
/**
 * _islower - checks for lowercase character
 *
 * @c: collected alphabet
 *
 * Return: (0)
 *
 */
int _islower(int c)
{
	char i;
	int lower = 0;


	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == c)
		{
		lower = 1;
		}
	}
	return (lower);
}
