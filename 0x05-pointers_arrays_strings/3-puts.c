#include "main.h"
/**
 * _puts - This prints a string, followed by a new line
 *
 * @str: integer
 * Return: void
 */
void _puts(char *str)
{
	int y;

	for (y = 0; str[y] != '\0'; y++)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}
