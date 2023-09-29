#include "main.h"
/**
 * get_endianness - This checks the endianness
 *
 * Return: big endianor little endian
 *
 */
int get_endianness(void)
{
	unsigned int x;
	char *endi;

	x = 1;
	endi = (char *) &x;


	return ((int)*endi);
}
