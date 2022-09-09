#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all letters of the lowercase english alphabet
 *
 * Return: 0 Always
*/

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		++c;
	}
	putchar('\n');

	return (0);
}
