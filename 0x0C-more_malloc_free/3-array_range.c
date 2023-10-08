#include "main.h"
#include<stdlib.h>
/**
 * array_range- creates an array of integers
 * @min:P1
 * @max:P2
 * Return: array of integers
 */
int *array_range(int min, int max)
{
	int *p;
	int elm_nbr;
	int i, j = 0;

	if (min > max)
		return (NULL);
	elm_nbr = max - min + 1;
	p = malloc(sizeof(int) * elm_nbr);
	if (p == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
	{
		p[j] = i;
		j++;
	}
	return (p);
}
