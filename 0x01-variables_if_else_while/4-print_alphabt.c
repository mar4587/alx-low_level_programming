#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase
 * followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
		if (a != 'q' && a != 'e')
		{
		putchar(a);
		}
	putchar('\n');
	return (0);
}
