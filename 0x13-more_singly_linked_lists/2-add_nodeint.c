#include "lists.h"

/**
 * add_nodeint - This adds a new node at the beginning
 * of a listint_t list.
 * @head: the pointer
 * @n: the new node.
 * Return: y or NULL
 *
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *y;

	y = malloc(sizeof(listint_t));
	if (y == NULL)
		return (NULL);

	y->n = n;
	y->next = *head;
	*head = y;

	return (y);
}
