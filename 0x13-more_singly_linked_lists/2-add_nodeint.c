#include "lists.h"
/**
 * add_nodeint- add a new node at the beginning of a listint_t
 * @head:P1
 * @n:P1
 * Return:address of the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p;

	p = malloc(sizeof(listint_t));
	if (p == NULL)
		return (NULL);
	p->n = n;
	p->next = *head;

	*head = p;

	return (p);
}
