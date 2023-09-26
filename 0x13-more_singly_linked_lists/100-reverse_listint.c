#include "lists.h"

/**
 * reverse_listint - This reverses a listint_t linked list
 *
 * @head: the pointer
 *
 * Return: the head
 **/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *node1, *node2;

	if (!head)
		return (NULL);

	node1 = NULL;
	while (*head)
	{
		node2 = (*head)->next;
		(*head)->next = node1;
		node1 = *head;
		*head = node2;
	}
	*head = node1;

	return (*head);
}
