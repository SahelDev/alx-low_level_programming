#include "main.h"
#include<stdlib.h>
/**
 * alloc_grid- function that returns a pointer to a 2d
 * array of integers
 * @width: P1
 * @height:P2
 * Return: a pointer
 */
int **alloc_grid(int width, int height)
{
	int **tab;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	tab = (int **)malloc(height * sizeof(int *));

	if (tab == NULL)
	{
		free(tab);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		tab[i] = malloc(width * sizeof(int));
		if (tab[i] == NULL)
		{
			while (i >= 0)
			{
				free(tab[i]);
				i--;
			}
			free(tab);
			return (NULL);
		}

	}

	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			tab[i][j] = 0;

	return (tab);
}
