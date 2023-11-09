#include "lists.h"

/**
 * insert_dnodeint_at_index - This inserts a nw node at a given position
 * @h: the head of the list
 * @idx: the index of the nw node
 * @n: the value of the nw node
 *
 * Return: the address
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *nw;
	dlistint_t *head;
	unsigned int i;

	nw = NULL;
	if (idx == 0)
		nw = add_dnodeint(h, n);
	else
	{
		head = *h;
		i = 1;
		if (head != NULL)
			while (head->prev != NULL)
				head = head->prev;
		while (head != NULL)
		{
			if (i == idx)
			{
				if (head->next == NULL)
					nw = add_dnodeint_end(h, n);
				else
				{
					nw = malloc(sizeof(dlistint_t));
					if (nw != NULL)
					{
						nw->n = n;
						nw->next = head->next;
						nw->prev = head;
						head->next->prev = nw;
						head->next = nw;
					}
				}
				break;
			}
			head = head->next;
			i++;
		}
	}

	return (nw);
}
