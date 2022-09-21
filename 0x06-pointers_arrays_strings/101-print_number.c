#include "main.h"

/**
* raise - Raises 10 by a set value.
*
* @n: Raise 10 to power n
* Return: 10 raised to @n
*/
int raise(int n)
{
	int ret = 1;
	int i = n;

	while (i > 0)
	{
		ret = ret * 10;
		i--;
	}

	return (ret);
}

/**
* print_number - Prints the string value of a number.
* @n: The number we wish to print.
* Return: Does not return a value.
*/
void print_number(int n)
{
	int value = n;
	int digits = 0;

	if (n < 0) /* If this number is negative */
	{
		_putchar(45); /* Start with the minus sign */
	}

	if (value < 0)
	{
		value = value * -1; /* Absolute value only */
	}

	int temp = value; /*Used to calculate the number of digits temporarily */

	while (1) /* Count the number of digits in this number */
	{
		temp /= 10;
		digits++;

		if (temp < 1)
		{
			break;
		}
	}

	while (1)
	{
		/* Reduce digits before use otherwise it's positionally be +1 wrong */
		char c = ((value / raise(--digits)) % 10) + 48;

		_putchar(c);
		if (digits < 1)
		{
			break;
		}
	}
}
