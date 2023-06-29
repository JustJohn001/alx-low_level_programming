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

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - 1];
		a[n - 1 - i] = j;
	}
}
