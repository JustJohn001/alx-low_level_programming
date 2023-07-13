#include <stdlib.h>
#include <string.h>

/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: number of elements
 * @size: size of elements
 * Return: NULL if malloc fails or nmemb or size is 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	unsigned int total_size;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total_size = nmemb * size;

	ptr = malloc(total_size);

	if (ptr == NULL)
		return (NULL);

	memset(ptr, 0, total_size);

	return (ptr);
}
