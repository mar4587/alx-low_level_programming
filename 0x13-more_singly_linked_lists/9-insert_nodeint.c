#include "lists.h"

/**
 * insert_nodeint_at_index - This inserts a new node at a given position
 * @head: a pointer
 * @idx: a position to the node
 * @n: data
 *
 * Return: the head
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *node1 = *head;
	listint_t *node2;
	unsigned int index;
	unsigned int cont = 0;

	/* create node */
	node2 = malloc(sizeof(listint_t));
	if (node2 == NULL)
		return (NULL);
	node2->n = n;

	/* border case for insert at the beginning */
	if (idx == 0)
	{
		node2->next = *head;
		*head = node2;
		return (*head);
	}

	/* search of position to insert */
	index = idx - 1;
	while (node1 && cont != index)
	{
		cont++;
		node1 = node1->next;
	}

	/* general case */
	if (cont == index && node1)
	{
		node2->next = node1->next;
		node1->next = node2;
		return (node2);
	}

	free(node2);

	return (NULL);
}
