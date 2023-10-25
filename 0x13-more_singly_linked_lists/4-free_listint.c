#include "lists.h"
/**
 * free_listint-function that frees a listint_t
 * @head:P1
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *next_node;

	if (head == NULL)
		return;
	next_node = head;

	while (next_node != NULL)
	{
		next_node = head->next;
		free(head);
		head = next_node;
	}

}
