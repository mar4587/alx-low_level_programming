#include "main.h"
/**
 * clear_bit - This sets the value of a bit to 0
 * @n: a pointer
 *
 * @index: the index
 *
 * Return: 1 or -1
 *
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int k;

	if (index > 63)
	{
		return (-1);
	}

	k = 1 << index;

	if (*n & k)
		*n ^= k;

	return (1);
}
