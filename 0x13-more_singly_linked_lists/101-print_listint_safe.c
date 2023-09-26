#include "lists.h"

/**
 * free_listp - This frees a linked list
 * @head: the pointer
 *
 * Return: no return
 *
 */
void free_listp(listp_t **head)
{
	listp_t *temp;
	listp_t *y;

	if (head != NULL)
	{
		y = *head;
		while ((temp = y) != NULL)
		{
			y = y->next;
			free(temp);
		}

		*head = NULL;
	}
}

/**
 * print_listint_safe - This prints a linked list
 * @head: the pointer
 *
 * Return: nodes
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t x = 0;
	listp_t *hptr, *new, *add;

	hptr = NULL;
	while (head != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)head;
		new->next = hptr;
		hptr = new;

		add = hptr;
		while (add->next != NULL)
		{
			add = add->next;
			if (head == add->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (x);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		x++;
	}

	free_listp(&hptr);

	return (x);
}
