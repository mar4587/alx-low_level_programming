#include <stdio.h>
#include <stdlib.h>
/**
 * main - This programs multiples two numbers
 * @argc: number of this command
 * @argv: the array
 * Return: 0 (success)
 */
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}

