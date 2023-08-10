#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * string_nconcat - conatenate two string
 * @s1: string one
 * @s2: string two
 * @n: no of element cocatenate from s2
 * Return: pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	size_t x, y, z;
	char *s;

	if (s1 == NULL)
		x = 0;
	else
	{
		for (x = 0; s1[x] != '\0'; x++)
			;
	}
	if (s2 == NULL)
		y = 0;
	else
	{
		for (y = 0; s2[y] != '\0'; y++)
			;
	}
	if (y > n)
		y = n;
	s = malloc(sizeof(int) * (x + y + 1));
	if (s == NULL)
		return (NULL);
	for (z = 0; z < x; z++)
		s[z] = s1[z];
	for (z = 0; z < y; z++)
		s[z + 1] = s2[z];
	s[x + y] = '\0';
	return (s);
}
