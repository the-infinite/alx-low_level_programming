#include "main.h"

/**
 * main - Entry point
 *
 * Description: prints the string _putchar using _putchar prototype
 *
 * Return: 0 always. This function never fails.
*/
int main(void)
{
	char str[] = "_putchar\0";
	int c = *str;

	for (ch = 0; c != '\0'; ++ch)
		_putchar(c);
		str++; /* Increment the pointer */
		c = *str; /* Allocate the character again  again so we move forward */
	_putchar('\n');

	return (0);
}
