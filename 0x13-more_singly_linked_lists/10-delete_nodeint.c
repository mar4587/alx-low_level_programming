#include "lists.h"

/**
 * delete_nodeint_at_index - This deletes the node at
 * index of a listint_t list.
 * @head: the pointer
 *
 * @index: the position of the node
 *
 * Return: 1 or -1
 **/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node1 = *head;
	listint_t *node2 = *head;
	unsigned int idx;
	unsigned int cont = 0;

	/* border case for empty list */
	if (!(*head))
		return (-1);

	/* border case for delete at the beginning */
	if (index == 0)
	{
		*head = node2->next;
		free(node2);
		return (1);
	}

	/* search of position to delete */
	idx = index - 1;
	while (node1 && cont != idx)
	{
		cont++;
		node1 = node1->next;
	}

	/* general case */
	if (cont == idx && node1)
	{
		node2 = node1->next;
		node1->next = node2->next;
		free(node2);

		return (1);
	}

	return (-1);
}
