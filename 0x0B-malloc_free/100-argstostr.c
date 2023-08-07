#include "main.h"
#include <stdlib.h>
/**
 * argstostr - concatenate all the argument
 * @ac: argument count
 * @av: argument vector
 *
 * Return: no return
 *
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int i, n, k, len = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			len++;
	}
	len += ac;
	aout = malloc(sizeof(char) * len + 1);
	if (aout == NULL)
		return (NULL);
	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			aout[k] = av[i][n];
			k++;
		}
		aout[k++] = '\n';
	}
	aout[k] = '\0';
	return (aout);
}
