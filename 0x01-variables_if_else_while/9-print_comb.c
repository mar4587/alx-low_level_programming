#include <stdio.h>
/**
 * main - a program that prints the alphabet in lowercase
 * followed by a new line
 * Return: 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0 ; a <= 9 ; a++)
	{
		putchar((a % 10) + '0');
		if (a == 9)
			continue;
		putchar(',');
		putchar(' ');
	}
	putchar('\n');
	return (0);
}
