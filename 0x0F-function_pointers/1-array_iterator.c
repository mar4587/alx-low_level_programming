#include "function_pointers.h"
/**
 * array_iterator - This iterates through an array
 * @array: target
 * @size: the size
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int y;

	if (array == NULL || action == NULL)
		return;

	for (y = 0; y < size; y++)
	{
		action(*array);
		array++;
	}
}
