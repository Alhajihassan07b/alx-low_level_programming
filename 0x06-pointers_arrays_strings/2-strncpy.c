#include "main.h"
#include <stdio.h>
/**
 * _strncpy - a function that copy a string
 * @dest: destination of string
 * @src: source of string
 * @n: no of string
 *
 * Return: dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for (i = i; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
