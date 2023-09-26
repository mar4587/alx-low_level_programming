#include "lists.h"

/**
 * free_listint_safe - This function that frees a listint_t list
 * @h: the pointer
 *
 * Return: the size of the list, otherwise 0
 *
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *node1;
	listnode_t *nodes = NULL; /* stores address of nodes */
	size_t nums = 0;

	if (h == NULL)
		return (0);

	/* while you have not ennumsered a loop */
	while (!is_in_nodes(nodes, *h))
	{
		/* check if the malloc fails then exit */
		if (!add_nodeptr(&nodes, *h))
		{
			free_listnode(nodes);
			exit(98);
		}
		node1 = *h;
		*h = (*h)->next;
		free(node1);
		nums++;
	}
	/* if you ennumser a loop */
	if (*h != NULL)
		*h = NULL;

	/* print where the loop starts */
	/*	printf("-> [%p] %d\n", (void *)head, head->n); */
	free_listnode(nodes);
	/* return number of nodes */

	return (nums);
}
