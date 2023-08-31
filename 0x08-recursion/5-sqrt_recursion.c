#include "main.h"
/**
 * sqrt_a - This returns the natural square root of
 * a number
 * @a: input
 * @b: integer
 * Return: the square root
 */
int sqrt_a(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt_a(a, b + 1));
}
