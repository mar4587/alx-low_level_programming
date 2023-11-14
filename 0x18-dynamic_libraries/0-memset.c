#include "main.h"
/**
 * *_memset - This fills memory with bytes
 * @s: string
 * @b: bytes
 * @n: number
 *
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}


