#include "lists.h"

/**
 * find_listint_loop - This finds the loop in a linked list
 * @head: the pointer
 *
 * Return: the address
 *
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node2;
	listint_t *prev;

	node2 = head;
	prev = head;

	while (head && node2 && node2->next)
	{
		head = head->next;
		node2 = node2->next->next;

		if (head == node2)
		{
			head = prev;
			prev =  node2;
			while (1)
			{
				node2 = prev;
				while (node2->next != head && node2->next != prev)
				{
					node2 = node2->next;
				}
				if (node2->next == head)
					break;

				head = head->next;
			}

			return (node2->next);
		}
	}
	return (NULL);
}
