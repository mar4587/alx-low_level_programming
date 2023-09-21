#include "lists.h"

/**
 * print_list - This function prints all the elements of a linked list
 * @h: the pointer
 *
 * Return: the numbers
 *
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		s++;
	}
	return (s);
}
