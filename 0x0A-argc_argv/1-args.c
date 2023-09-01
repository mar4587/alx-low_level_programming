#include <stdio.h>
/**
 * main - This prints the number of arguments passed into it
 * @argc: number of command
 * @argv: the array
 * Return: 0 (successful)
 */
int main(int argc, char **argv __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
