#include "main.h"
/**
 * *_strcpy - This copies the string pointed to by src
 *
 * @dest: first integer
 * @src: second value
 *
 * Return: value of dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
