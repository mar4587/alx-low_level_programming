#include "main.h"
/**
 * main - this program prints _putchar
 *Return 0 (Success)
 */
int main(void)
{
	int j;
	char c[] = "_putchar";

	for (j = 0; j <= 7; j++)
	{
		_putchar(c[j]);
	}
	_putchar('\n');
	return (0);
}
