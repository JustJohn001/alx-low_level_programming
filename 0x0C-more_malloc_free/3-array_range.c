#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: minumum value
 * @max: maximum value
 * Return: NULL if malloc fails or if min > max,
 * otherwise teh pointeer ot the newly created array
 */

int *array_range(int min, int max)
{
	int size, *arr, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}

	return (arr);
}
