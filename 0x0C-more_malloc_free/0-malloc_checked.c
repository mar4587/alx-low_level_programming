#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - This is the Main Entry
 * @b: input
 * Return: y
 */
void *malloc_checked(unsigned int b)
{
	void *y;

	y = malloc(b);
	if (y == NULL)
		exit(98);
	return (y);
}

