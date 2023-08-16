#include "function_pointers.h"
/**
 * int_index - a function that searche an integer
 * @array: pointer beginning of array
 * @size: size of an array
 * @cmp: pointer of the array
 * Return: -1 if size < 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
