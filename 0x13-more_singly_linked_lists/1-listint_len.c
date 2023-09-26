#include "lists.h"

/**
 * listint_len - This returns the number of elements
 * in a linked listint_t list.
 * @h: the pointer to the list
 *
 * Return: number of nodes.
 **/

size_t listint_len(const listint_t *h)
{
	const listint_t *node = h;
	size_t nodes = 0;

	while (node)
	{
		nodes++;
		node = node->next;
	}

	return (nodes);
}
