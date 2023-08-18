#include <stdio.h>
/**
 * main - This finds and prints the largest prime factor
 *
 * Return: alaways 0
 *
 */
int main(void)
{
	long int a, b, c;

	b = 612852475143;
	for (a = 1; a <= b; a++)
	{
		if (b % a == 0)
		{
			if (b == a)
			{
				printf("%d\n", a);
			}
			c = b / a;
			b = c;
		}
	}
	return (0);
}
