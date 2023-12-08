#include"lists.h"
/**
 * print_dlistint-a function that prints all elements of dlistint
 * @h:parameter 1
 * Return: the number of node
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;


	if (h == NULL)
	{
		return (-1);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i += 1;
	}
	return (i);
}
