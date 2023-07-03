#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: pointer to string
 * @needle: pointer to substring
 * Return: pointer to the beginiing of the located substring
 * or null if the substring is not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *start, *substr;

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		start = haystack;
		substr = needle;

		while (*haystack && *substr && *haystack == *substr)
		{
			haystack++;
			substr++;
		}

		if (*substr == '\0')
		{
			return (start);
		}
		haystack = start + 1;
	}
	return (NULL);
}
