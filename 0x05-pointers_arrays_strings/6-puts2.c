#include "main.h"

/**
 * puts2 - prints all characters in a string with an even index
 *
 * @str: the character sequence to consider
 *
 * Return: Does not return a value.
*/

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; ++i)
	{
		/* If this character is at an even offset */
		if (i % 2 == 0)
		{
			_putchar(str[i]); /* We print it */
		}
	}
	_putchar('\n');
}
