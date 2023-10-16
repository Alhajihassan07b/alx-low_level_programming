#include "main.h"
/**
 * _isdigit - check the parameter
 *
 * @c: parameter
 * Return: (1) if is number otherwise 0
 *
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
