#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase
 * followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	char a, b;

	for (a = 'a' ; a <= 'z' ; a++)
	putchar(a);
	for (b = 'A' ; b <= 'Z' ; b++)
	putchar(b);
	putchar('\n');
	return (0);
}
