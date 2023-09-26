#include "lists.h"

/**
 * add_nodeint_end - This adds a new node at the end of
 * a listint_t list.
 * @head: the pointer
 * @n: the new node.
 *
 * Return: y or NULL
 *
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *y, *aux = *head;

	y = malloc(sizeof(listint_t));

	if (y == NULL)
		return (NULL);
	y->n = n;
	y->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
		aux->next = y;
	}
	else
		*head = y;


	return (y);
}
