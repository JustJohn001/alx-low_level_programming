#include "main.h"
#include <stdlib.h>
#include <string.h>

char *str_concat(char *s1, char *s2)
{
	size_t len1, len2;
	char *result, *ptr;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	
	len1 = strlen(s1);
	len2 = strlen(s2);

	result = (char *)malloc((len1 + len2 + 1) * sizeof(char));
	if (result == NULL)
	{
		return (NULL);
	}
	ptr = result;

	while (*s1 != '\0')
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}

	while (*s2 != '\0')
	{
		*ptr = *s2;
		ptr++;
		s2++;
	}

	ptr = '\0';

	return (result);
}
