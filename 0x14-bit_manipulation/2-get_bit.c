#include "main.h"
/**
 * get_bit - This returns the value of a bit at a given index.
 * @n: the int
 * @index: the index of the bit
 *
 * Return: 1 otherwise -1
 *
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int nu;

	if (n == 0 && index < 64)
		return (0);

	for (nu = 0; nu <= 63; n >>= 1, nu++)
	{
		if (index == nu)
		{
			return (n & 1);
		}
	}


	return (-1);
}
