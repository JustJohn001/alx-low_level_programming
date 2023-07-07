#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers
 * @argc: - number of arguments
 * @argv: - array pointer to store the arguments
 * Return: void
 */

int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc != 3)
	{
		printf("Error\n");
	return (1);
	}

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i * j;

	printf("%d\n", result);

	return (0);
}
