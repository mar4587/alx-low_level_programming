#include "main.h"
/**
 * print_rev - This  prints a string, in reverse, followed by a new line
 *
 * @s: string
 *
 * Return: void
 */
void print_rev(char *s)
{
	int x;

	for (x = strlen[s] - 1; x >= 0; x--)
	{
		_putchare(s[x]);
	}
	_putchare('\n');
}
