#include "main.h"
/**
 * *_strchr - This locates a character
 * @s: string
 * @c: copy
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s >= '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (0);
}
