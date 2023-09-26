#include "lists.h"

/**
 * free_listint - This frees a listint_t list.
 * @head: the pointer
 *
 * Return: void
 **/

void free_listint(listint_t *head)
{
	listint_t *node1;
	listint_t *node2;

	if (head)
	{
		node1 = head;
		node2 = head->next;
		while (node2)
		{
			free(node1);
			node1 = node2;
			node2 = node2->next;
		}
		free(node1);
	}
}
