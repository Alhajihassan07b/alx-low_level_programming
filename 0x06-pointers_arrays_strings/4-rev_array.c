#include "main.h"
#include <stdio.h>
/**
 * reverse_array - a function that reverse the content of array
 *
 * @a: pointer to an array
 * @n: no element of array
 *
 * Return: (void)
 */
void reverse_array(int *a, int n)
{
	int i = 0, temp;

	n = n - 1;

	for (i = 0; i < n; i++)
	{
		temp = a[i];
		a[i] = a[n];
		a[n] = temp;
		n--;
	}
}
