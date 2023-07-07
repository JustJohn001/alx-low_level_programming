#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/**
 * isPositiveInt - checks if a string contains only digits
 * @str: pointer to the string to check
 * Return: True if digits only, false otherwise
 */

bool isPositiveInt(const char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
		{
			return (false);
		}
	}
	return (true);
}

/**
 * main - adds positive numbers
 * @argc: - number of arguments
 * @argv: - array pointer to store the arguments
 * Return: void
 */

int main(int argc, char *argv[])
{
	int i, sum;

	if (argc == 1)
	{
		printf("0\n");
	return (0);
	}

	sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (!isPositiveInt(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}
