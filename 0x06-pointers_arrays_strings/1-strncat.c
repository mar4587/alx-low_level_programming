#include "main.h"
/**
 * *_strncat - This concatenates
 * @dest: dest
 * @src: src
 * @n: integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int ld, ls, a;

	for (ld = 0; dest[ld] != '\0'; ld++)
	for (ls = 0; src[ls] != '\0'; ls++)
	for (a = 0; a < n; a++)
	{
		dest[ld + a] = src[a]
	}
	return (dest);
}
