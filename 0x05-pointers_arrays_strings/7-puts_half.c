#include "main.h"

/**
 * puts_half - prints ONLY half of the characters in a string
 *
 * @str: The character sequence to print.
 *
 * Return: Does not return a vlaue.
*/

void puts_half(char *str)
{
	int l, n;

	for (l = 0; str[l] != '\0'; ++l)
		;

	if (l % 2 == 0) /* If the string is even in length */
	{
		for (n = l / 2; str[n] != '\0'; ++n)
		{
			_putchar(str[n]);
		}
	} else
	{ /* We make it even so we work with the ceil approximate */
		for (n = ((l - 1) / 2) + 1; str[n] != '\0'; ++n)
		{
			_putchar(str[n]);
		}
	}
	_putchar('\n');
}
