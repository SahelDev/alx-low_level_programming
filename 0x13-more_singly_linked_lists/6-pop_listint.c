#include "lists.h"
/**
 * pop_listint- function that deletes the head node
 * @head:P1
 * Return: head node data
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int sec;

	if (*head == NULL)
		return (0);

	temp = *head;
	sec = temp->n;
	*head = temp->next;

	free(temp);
	return (sec);
}
