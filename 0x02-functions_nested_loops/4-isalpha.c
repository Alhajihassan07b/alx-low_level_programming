#include "main.h"
/**
 * _isalpha - print alphabet
 *
 * Description: check alphabet
 *@c: collected alphabet
 * Return: (1)
 *
 */
int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (lower == c || upper == c)
			{
			letter = 1;
			}
		}
	}
		return (letter);

}
