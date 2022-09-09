#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all base 10 digit characters in ASCII format
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		/*add to the character code for 0 to convert to ASCII representation*/
		putchar(digit++ + '0');
	}
	putchar('\n');

	return (0);
}
