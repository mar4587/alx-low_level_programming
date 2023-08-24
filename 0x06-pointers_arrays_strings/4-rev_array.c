#include "main.h"

/**
 * reverse_array - This reverses
 * @a: array
 * @n: integer
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int x, c, y;

	c = n - 1;
	for (x = 0; x < c; x++)
	{
		y = a[x];
		a[x] = a[c];
		a[c] = y;
		c--;
	}
}
