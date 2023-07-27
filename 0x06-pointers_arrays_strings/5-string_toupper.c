#include "main.h"
#include <stdio.h>
/**
 * string_toupper - function that changes lower to uppercase
 * @str: string
 *
 * Return: string
 *
 */
char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		str[i] = toupper(str[i]);
		i++;
	}


}
