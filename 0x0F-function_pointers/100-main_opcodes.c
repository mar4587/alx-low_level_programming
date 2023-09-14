#include <stdlib.h>
#include <stdio.h>

/**
 * print_opcodes - This print the opcodes
 * @a: the address
 * @n: the number
 *
 * Return: void
**/

void print_opcodes(char *a, int n)
{
int i;

for (i = 0; i < n; i++)
{
printf("%.2hhx", a[i]);
if (i < n - 1)
printf(" ");
}
printf("\n");

}

/**
 * main - This prints the opcodes.
 * @argc: number of arguments
 * @argv: array of pointers
 *
 * Return: always O Sucess
 */

int main(int argc, char **argv)
{
int n;

if (argc != 2)
{
printf("Error\n");
exit(1);
}
n = atoi(argv[1]);
if (n < 0)
{
printf("Error\n");
exit(2);
}
print_opcodes((char *)&main, n);

return (0);
}
