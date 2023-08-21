#include "main.h"
/**
 * _strlen - This returns the length of a string
 *
 * @s: string
 * Return: value of the string
 */
int _strlen(char *s)
{
	int longa = 0;

	while (*s != '\0')
	{
		longa++;
		s++;
	}
	return (longa);
}
