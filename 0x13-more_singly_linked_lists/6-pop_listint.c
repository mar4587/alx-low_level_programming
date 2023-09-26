#include "lists.h"

/**
 * pop_listint - This deletes the head node
 * of a listint_t linked list
 *
 * @head: the pointer
 * Return: d
 *
 **/
int pop_listint(listint_t **head)
{
	int d;
	listint_t *first_node = *head;

	if (!first_node)
		return (0);

	d = (*head)->n;
	*head = first_node->next;
	free(first_node);

	return (d);
}
