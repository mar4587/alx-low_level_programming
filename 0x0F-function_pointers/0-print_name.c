#include "function_pointers.h"

/**
 * print_name - This prints a name.
 * @name: The name
 * @f: A pointer to a function
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
