#include "lists.h"

/**
 * sum_listint - This returns the sum of all the
 * data (n) of a listint_t list.
 *
 * @head: the pointer
 * Return: the sum
 *
 **/
int sum_listint(listint_t *head)
{
	listint_t *nd = head;
	int sum = 0;

	while (nd)
	{
		sum += nd->n;
		nd = nd->next;
	}

	return (sum);
}
