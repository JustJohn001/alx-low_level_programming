#include <stdio.h>

/**
 * main - prints the alphabet in lowercase except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char a_z;


	for (a_z = 'a'; a_z <= 'z'; a_z++)
	{
		if (a_z != 'q' && a_z != 'e')
	{
			printf("%c", a_z);
	}
	}

	printf("\n");

	return (0);
}
