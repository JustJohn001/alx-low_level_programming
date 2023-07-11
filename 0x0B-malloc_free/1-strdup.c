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
	size_t length = strlen(str) + 1;

	duplicate = (char *)malloc((length + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}

	if (duplicate == NULL)
	{
		return (NULL);
	}

	strcpy(duplicate, str);
	return (duplicate);
}
