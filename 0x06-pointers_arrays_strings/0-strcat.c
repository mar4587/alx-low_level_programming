#include "main.h"
/**
 * *_strcat - This  concatenates two strings
 * @dest: dest
 * @src: src
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int lend, lens, a;

	for (lend = 0; dest[lend] != '\0'; lend++)
	{

	}
	for (lens = 0; src[lens] != '\0'; lens++)
	{

	}
	for (a = 0; a <= lens; a++)
	{
		dest[lend + a] = src[a];
	}

	return (0);
}
