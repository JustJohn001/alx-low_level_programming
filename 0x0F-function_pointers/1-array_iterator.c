#include <stdlib.h>

/**
 * array_iterator - a fuction that execute a fuction
 * @array: array to interate through
 * @size: array size
 * @action: pointer to the fuction
 * Return: Void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (!array || !size || !action)
		return;

	while (size--)
		action(*array++);
}
