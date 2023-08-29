#include "main.h"
/**
 * *_strspn - This locates a character
 * @s: string
 * @accept: copy
 *
 * Return: n
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
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
	return (0);
}
