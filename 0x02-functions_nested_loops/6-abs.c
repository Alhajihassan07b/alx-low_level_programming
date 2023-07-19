#include "main.h"
/**
 * _abs - compute absolute value of an int
 * @r: the value
 * Description: The standard library provides a similar function
 * Return: (0)
 *
 */
int _abs(int r)
{
	if (r >= 0)
		return (r);
	else
		return (r * -1);
}
