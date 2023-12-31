#include "lists.h"
/**
 * free_listint2-frees a listint_t list
 * @head:P1
 * Return: void
 */


void free_listint2(listint_t **head)
{
	listint_t *prev;

	if (head == NULL)
		return;
	while (*head)
	{
		prev = *head;
		*head = (*head)->next;
		free(prev);
	}

}
