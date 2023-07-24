#include "main.h"
#include <stdio.h>
/**
 * swap_int - to swap the integer
 *
 * @a: parameter
 * @b: parameter
 *
 * Return: always (0)
 *
 */
void swap_int(int *a, int *b)
{
	int empty;
	int *c = &empty;

	*c = *a;
	*a = *b;
	*b = *c;
}
