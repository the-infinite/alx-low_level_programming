#include "main.h"

/**
 * print_rev - prints a string in the reverse order it was created.
 *
 * @s: character sequence to work with.
 *
 * Return: Does not return a value.
*/

void print_rev(char *s)
{
	int index;

	/* find the length of a string using null characters */
	for (index = 0; s[index] != '\0'; ++index)
		;

	/* Now, print starting from the tail of this string. */
	for (--index; index >= 0; --index)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
