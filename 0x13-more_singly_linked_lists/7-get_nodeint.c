#include "lists.h"

/**
 * get_nodeint_at_index - This returns the nth node of a
 * listint_t linked list.
 *
 * @head: the pointer
 * @index: the nth node
 * Return: the nth node
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = head;
	unsigned int y = 0;

	while (node && y != index)
	{
		y++;
		node = node->next;
	}
	if (node && y == index)
		return (node);

	return (NULL);
}
