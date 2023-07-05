#include "main.h"

/**
 * is_prime_number - returns 1 if the input integer
 * is a prime number, 0 otherwise
 * @n: number to check
 * Return: 1 if n is a prime number, 0 otherwise
 *
 * is_prime_checker - checks if n is divisible
 * by any number from divisor onwards
 * @divisor: divisor to help check the prime number
 */

int is_prime_checker(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (divisor * divisor < n)
	{
		return (1);
	}
	else if (n % divisor == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_checker(n, divisor + 1));
	}
}

int is_prime_number(int n)
{
	return (is_prime_checker(n, 2));
}
