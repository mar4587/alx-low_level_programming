#include "main.h"
/**
 * rev_string - This reverses a string.
 * @s: integer
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, len = strlen(s), j = 0;
	char temp;

	for (i = len; i >= len / 2; i--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
		j++;
	}
}

