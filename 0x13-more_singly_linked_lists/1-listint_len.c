#include"lists.h"
#include<stdio.h>

/**
 * listint_len-returns the number of elements
 * @h:P1
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	if (h == NULL)
	{
		printf("Error\n");
		return (1);
	}

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}






