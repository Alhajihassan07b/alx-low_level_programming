#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * ch_free_grid - Entry point
 * @height: input
 * @grid: input
 */
void ch_free_grid(char **grid, size_t height)
{
	if (grid != NULL && height != 0)
	{
		for (; height > 0; height--)
		{
		free(grid[height - 1]);
		free(grid);
		}
	}
}
/**
 * strtow - splits a string into word
 * @str: a string
 * Return: no return
 *
 */
char **strtow(char *str)
{
	size_t c, height, i, al;
	char **aout;

	if (str == NULL || *str == '\0')
		return (NULL);
	for (c = height = 0; str[c] != '\0'; c++)
		if (str[c] != ' ' && (str[c + 1] == ' ' || str[c + 1] == '\0'))
			height++;
	{
		aout = malloc((height + 1) * sizeof(char *));
	}
		if (aout == NULL)
		{
			free(aout);
			return (NULL);
		}
	for (i = 0; i < height; i++)
	{
		while (str[al] == ' ')
			al++;
		c = al;
		while (str[c] != ' ' && str[c] != '\0')
			c++;
		aout[i] = malloc((c - al + 1) * sizeof(char));
		if (aout[i] == NULL)
		{
			ch_free_grid(aout, i);
			return (NULL);
		}
		strncpy(aout[i], &str[al], c - al);
		aout[i][c - al] = '\0';
		al = c + 1;
	}
	aout[height] = NULL;
	return (aout);
}
