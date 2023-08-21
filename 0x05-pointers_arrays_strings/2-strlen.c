#include "main.h"
/**
 * _strlen - This returns the length of a string
 *
 * @s: string
 * Return: value of the string
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[1] != '\0'; a++)
		;
	return (a);
}
