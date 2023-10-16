#include "main.h"
#include <stdio.h>
/**
 * _strlen - length of the string
 *
 * @s: character of string
 * Return: (0)
 *
 */
int _strlen(char *s)
{
	int total_len;

	total_len = 0;
	while (s[total_len] != '\0')
	{
		total_len++;
	}
	return (total_len);
}
