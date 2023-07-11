#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - returns a pointer to a newly allocated space
 * in memory containing a copy of the string given as a parameter
 * @str: string to copy
 * Return: Null if str = NULL or when the memory is insufficient,
 * duplicated string
 */

char *_strdup(char *str)
{
	char *duplicate;
	size_t length = strlen(str);

	duplicate = (char *)malloc((length) * sizeof(char));

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);

	return (duplicate);
}
