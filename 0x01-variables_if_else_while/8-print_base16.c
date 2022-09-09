#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: prints all the digits of base 16
 *
 * Return: Always 0
*/

int main(void)
{
	int digit = 48; /*ASCII character code of 0*/

	while (digit <= 102) /*ASCII character code for f*/
	{
		putchar(digit);

		/* after 9 we jump till 96 to print the alphabetic characters*/
		if (digit == 57)
			digit += 39;
		++digit;
	}
	putchar('\n');

	return (0);
}
