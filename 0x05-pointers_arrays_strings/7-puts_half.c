#include "main.h"
#include <string.h>

/**
 * puts_half - This prints half of a string, followed by a new line
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int a, len = strlen(str);

	if (len % 2 != 0)
	{
		len = len / 2 + 1;
	}
	else
	{
		len /= 2;
	}
	for (a = len; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
