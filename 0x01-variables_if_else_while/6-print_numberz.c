#include <stdio.h>
/**
 * main - a program that prints all single digit numbers of base 10,,
 * followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	putchar(a + '0');
	putchar('\n');
	return (0);
}
