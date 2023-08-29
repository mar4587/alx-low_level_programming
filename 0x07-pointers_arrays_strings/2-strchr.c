#include "main.h"
/**
 * *_strchr - This locates a character
 * @s: string
 * @c: copy
 *
 * Return: n
 */
char *_strchr(char *s, char c)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i])
		{
			n++;
			break;
		}
		else if (accept[i + 1] == '\0')
		{
			return (n);
		}
		s++;
	}
	return (n);
}
