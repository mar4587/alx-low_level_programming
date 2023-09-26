#include "lists.h"

/**
 * free_listint2 - This frees a listint_t list
 *
 * this function sets the head to NULL
 *
 * @head: the pointer
 **/

void free_listint2(listint_t **head)
{
	listint_t *node1;
	listint_t *node2;

	if (!head)
		return;

	node1 = *head;
	node2 = (*head)->next;
	while (node2)
	{
		free(node1);
		node1 = node2;
		node2 = node2->next;
	}
	free(node1);

	*head = NULL;
}
