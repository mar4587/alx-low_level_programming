#include <stdio.h>
/**
 * main - This program prints all the arguments it receive
 * @argc: number of the command
 * @argv: the array
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	int y;

	for (y = 0; y < argc; y++)
	{
		printf("%s\n", argv[y]);
	}
	return (0);
}

