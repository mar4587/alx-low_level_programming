#include "main.h"
/**
 * *_strpbrk - This searches a string for any of a set of bytes
 * @s: string
 * @accept: the source
 *
 * Return: s 0r 0 (Success)
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}