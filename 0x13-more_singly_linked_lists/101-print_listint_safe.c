#include "lists.h"

/**
 * print_listint_safe - This prints a listint_t linked list
 * @head: the pointer
 *
 * Return: nodes
 **/
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0;
	const listint_t *aux_node = head;

	if (!head)
		exit(98);

	while (aux_node)
	{
		printf("[%p] %i\n", (void *)aux_node, aux_node->n);
		aux_node = aux_node->next;
		nodes++;
	}

	return (nodes);
}
