#include "main.h"

/**
 * main -  prints the alphabet in lowercase
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void) /*no return type for this function*/
{
	char alphabet;

		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)
		{
		_putchar(alphabet);
		}
	_putchar('\n');

}
