#include "main.h"

/**
* is_prime_number - Checks if a value is a prime number
* @n: The number to check for prime nature.
* Return: 1 when the number is prime and 0 otherwise.
*/
int is_prime_number(int n)
{
	if(n < 2)
	{
		return 0;
	}

	else if(n < 4)
	{
		return 1;
	}

	else if(n % 2 != 0)
	{
		return 0;
	}

	else
	{
		return is_prime_number(n/2);
	}

	return 1;
}
