#include "main.h"

/**
 * _puts_recursion - prints all the way to the tail of a string and then when
 * the string is completely printed, it prints a new line.
 *
 * @s: the string to print
 *
 * Return: Does not return.
*/

void _puts_recursion(char *s)
{
	/*IF THIS IS NOT THE END OF THE STRING.*/
	if (*s != '\0')
	{
		_putchar(*s); /* Print the current chractetr */
		_puts_recursion(s + 1);
	}

	else
		_putchar('\n');
}
