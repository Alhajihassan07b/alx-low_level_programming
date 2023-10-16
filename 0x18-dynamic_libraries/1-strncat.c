#include "main.h"
#include <stdio.h>
/**
 * _strncat - a function that concatenate two string
 *
 * @src: source string
 * @dest: destination string
 * @n: no of element to concatenate
 *
 * Return: dest + n of src
 *
 */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest, i;

	for (len_dest = 0; dest[len_dest] != '\0'; len_dest++)
	{

	}
	for (i = 0; src[i] != 0 && i < n; i++)
	{
		dest[len_dest + i] = src[i];
	}
	return (dest);
}
