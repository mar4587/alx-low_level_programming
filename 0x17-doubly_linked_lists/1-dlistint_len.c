#include "lists.h"

/**
 * dlistint_len - This returns the number of elements in
 * a double linked list
 * @h: the head
 * Return: the c
 *
 */
size_t dlistint_len(const dlistint_t *h)
{
	int c;

	c = 0;

	if (h == NULL)
		return (c);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}

	return (c);
}
