#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: input value
 * Return: pointer to the modified string
 */
char *leet(char *str)
{
	char s1[] = "aeotlAEOTL";
	char s2[] = "4307143071";
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == s1[j])
			{
				str[i] = s2[j];
				break;
			}
		}
	}

	return (str);
}
