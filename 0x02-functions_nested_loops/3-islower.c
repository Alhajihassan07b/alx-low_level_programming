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


	for (i = 'a'; i <= 'z' i++)
	{
		if (i == c)
		return (1);
	}
	else
	{
		return (0);
	}
}
