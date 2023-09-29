#include "main.h"
/**
 * flip_bits - This returns the number of bits you would
 * need to flip to get from
 * one number to another
 * @n: number one
 * @m: number two
 *
 * Return: the number of bits
 *
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int n_bit;

	for (n_bit = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			n_bit++;
	}

	return (n_bit);
}
