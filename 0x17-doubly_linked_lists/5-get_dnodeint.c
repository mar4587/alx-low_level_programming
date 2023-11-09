#include "lists.h"

/**
 * get_dnodeint_at_index - This returns the nth node of adlistint_t
 * linked list
 * @head: the list
 * @index: the index
 *
 * Return: nth
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int sze;
	dlistint_t *tmp;

	sze = 0;
	if (head == NULL)
	return (NULL);

	tmp = head;
	while (tmp)
	{
	if (index == sze)
	return (tmp);
	sze++;
	tmp = tmp->next;
	}

	return (NULL);
}
