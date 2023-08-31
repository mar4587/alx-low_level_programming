#include "main.h"
/**
 * prime_a - This calculates if its a prime number
 * @a: input
 * @b: input
 * Return: 0 (Success)
 *
 */
int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}

/**
 * is_prime_number - detect if its a prime no
 * @n: the input number
 * Return: 0 or 1
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
