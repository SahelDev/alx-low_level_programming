#include "function_pointers.h"
#include<stddef.h>

/**
 * array_iterator- execute a function given as a parameter on each element
 * @array:P1
 * @size:P2
 * @action:P3
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
