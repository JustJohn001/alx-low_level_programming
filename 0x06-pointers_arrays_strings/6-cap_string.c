#include "main.h"
#include <ctype.h>

/**
 * cap_string - capitalizes all words of a string
 * @str: pointer to string
 * Return: character
 */

char *cap_string(char *str)
{
	int i = 0;
	int caps = 1;

	while (str[i] != '\0')

	{
		if (caps && islower(str[i]))
		{
			str[i] = toupper(str[i]);
		}

		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		str[i] == '!' || str[i] == '?' || str[i] == '"' ||
		str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			caps = 1;
		}
		else
		{
			caps = 0;
		}
		i++;
	}
	return (str);
}
