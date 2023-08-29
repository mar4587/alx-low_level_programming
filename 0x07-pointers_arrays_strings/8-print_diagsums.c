#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - This prints the sum of the two diagonals
 * of a square matrix of integers
 * @a: array
 * @size: size of array
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i;
	int s1 = 0;
	int s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 += a[i];
		s2 += a[size - i - 1];
		a += size;
	}
	printf("%d, ", s1);
	printf("%d, ", s2);
}
