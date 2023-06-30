#include "main.h"

/**
 * reverse_array - reverses elements of an array of integers
 * @a: pointer to the array
 * @n: the number of elements
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;

	for (i = 0; i < n--; i++)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
	}
}
