#include "lists.h"
/**
 * get_nodeint_at_index-returns the nth node of a listint_h
 * @head:P1
 * @index:P1
 * Return:returns index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head)
	{
		if (index == counter)
			return (head);

		head = head->next;
		counter++;
	}
	return (NULL);
}
