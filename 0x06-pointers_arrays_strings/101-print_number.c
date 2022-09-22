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
* digit_count - Calculates the number of digits in a base 10 number
* @value: The number to check for digits
* Return: The number of digits in @value
*/
int digit_count(int value)
{
	int temp, digits = 0;

	temp = value; /*Used to calculate the number of digits temporarily */

	while (1) /* Count the number of digits in this number */
	{
		temp /= 10;
		digits++;
		if (temp < 1)
			break;
	}

	return (digits);
}

/**
* print_number - Prints the string value of a number.
* @n: The number we wish to print.
* Return: Does not return a value.
*/
void print_number(int n)
{
	int value = n;

	int digits;

	if (n < 0) /* If this number is negative */
	{
		_putchar(45); /* Start with the minus sign */
		value = value * -1; /* Absolute value only */
	}

	digits = digit_count(value);

	while (1)
	{
		char c;

		c = (value / raise(--digits) % 10) + 48;

		_putchar(c);
		if (digits < 1)
			break;
	}
}
