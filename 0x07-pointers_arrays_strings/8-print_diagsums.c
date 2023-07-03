#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print the sum fo the two diagonals
 * of a square matrix of intergers
 * @a: pointer to the first element
 * @size: size of the square matrix
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, i;

	sum1 = 0;
	sum2 = 0;

	for (i = 0; i < size; i++)
	{
		sum1 += a[i * size + i];
		sum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum1, sum2);
}
