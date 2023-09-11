#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print the struct
 *
 * @d: the new dog
 */

void print_dog(struct d)
{
	if (d)
	{
		if (!(d>name))
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d>name);
		printf("Age: %f\n", d>age);

		if (!(d>owner))
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d>owner);
	}
}
