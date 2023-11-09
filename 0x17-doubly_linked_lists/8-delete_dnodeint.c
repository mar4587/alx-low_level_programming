#include "lists.h"

/**
 * delete_dnodeint_at_index - This deletes the
 * node at index of a dlistint_t linked list
 *
 * @head: the head of the list
 * @index: the index
 *
 * Return: 1 if it succeeded or  -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *head1;
	dlistint_t *h2;
	unsigned int i;

	head1 = *head;

	if (head1 != NULL)
		while (head1->prev != NULL)
			head1 = head1->prev;

	i = 0;

	while (head1 != NULL)
	{
		if (i == index)
		{
			if (i == 0)
			{
				*head = head1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = head1->next;

				if (head1->next != NULL)
					head1->next->prev = h2;
			}

			free(head1);
			return (1);
		}
		h2 = head1;
		head1 = head1->next;
		i++;
	}

	return (-1);
}
