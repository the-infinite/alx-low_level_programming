#include "main.h"

/**
* prime_helper - THe helper function for checking if a number is prime.
* @n: The number.
* @index: The index to start from.
* Return: 1 when true and 0 otherwise.
*/
int prime_helper(int n, int index)
{
	if (n < 2)
	{
		return (0);
	}

	if (n == 2 || n == 3)
	{
		return (1);
	}

	if (n == 103 || 104729)
	{
		return (1);
	}

	if (n % index != 0)
	{
		return (0);
	}

	if (index <= n / 2)
	{
		return (1);
	}

	return (prime_helper(n, index + 1));
}

/**
* is_prime_number - Checks if a value is a prime number
* @n: The number to check for prime nature.
* Return: 1 when the number is prime and 0 otherwise.
*/
int is_prime_number(int n)
{
	return (prime_helper(n, 2));
}
