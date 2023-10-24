#include "lists.h"
#include<stdio.h>

/**
 * print_listint - prints all the elements of a listint
 * @h:P1
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
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
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
