#include "lists.h"

/**
 * free_listp2 - This frees a linked list
 * @head: the pointer
 *
 * Return: void
 *
 */
void free_listp2(listp_t **head)
{
	listp_t *temp;
	listp_t *node1;

	if (head != NULL)
	{
		node1 = *head;
		while ((temp = node1) != NULL)
		{
			node1 = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - This frees a linked list
 * @h: the pointer
 *
 * Return: j
 *
 */
size_t free_listint_safe(listint_t **h)
{
	size_t j = 0;
	listp_t *hptr, *new, *add;

	listint_t *node1;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (j);
			}
		}

		node1 = *h;
		*h = (*h)->next;
		free(node1);
		j++;
	}

	*h = NULL;
	free_listp2(&hptr);

	return (j);
}
