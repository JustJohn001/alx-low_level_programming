#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: length of string
 * Return: NULL if the function fails or the string is empty,
 * pointer to string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *result;
	size_t len1, len2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		n = len2;

	result = (char *)malloc((len1 + n + 1) * sizeof(char));
	if (result == NULL)
	return (NULL);

	strcpy(result, s1);
	strncat(result, s2, n);

	return (result);
}
