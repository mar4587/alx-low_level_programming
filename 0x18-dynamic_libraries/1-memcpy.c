#include "main.h"
/**
 * *_memcpy - This copies memory area
 * @dest: dest
 * @src: src
 * @n: number
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}
