#include <stdio.h>

/**
 * main - prints the lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char a_z;


	for (a_z = 'z'; a_z >= 'a';  a_z--)
	{
		printf("%c", a_z);
	}
	printf("\n");

	return (0);
}
