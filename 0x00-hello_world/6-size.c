#include <stdio.h>

/*
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char is %zu byte(s)", (unsigned long)sizeof(char));
	printf("Size of an int is %zu byte(s)", (unsigned long)sizeof(int));
	printf("Size of a long int is %zu byte(s)", (unsigned long)sizeof(long int));
	printf("Size of a long long int is %zu byte(s)", (unsigned long)sizeof(long long int));
	printf("Size of a char float %zu byte(s)", (unsigned long)sizeof(float));
	return (0);
}

