#include "main.h"
/**
 * *string_toupper - string to upper
 * @str: This str
 *
 * Return: str
 */

char *string_toupper(char *str)
{
	int y;

	for (y = 0; str[y] != '\0'; y++)
	{
		if (str[y] >= 'a' && str[y] <= 'z')
		{
			str[y] = str[y] - 32;
		}
	}
	return (str);
}
