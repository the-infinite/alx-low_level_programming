#include "main.h"

/**
 * _puts - prints the value of a string, trailed by a newline to stdout.
 *
 * @str: the string we wish to print to standard output
 *
 * Return: Does not return a value.
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str + 0);
		++str;
	}
	_putchar('\n');
}
