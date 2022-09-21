#include <stdio.h>

#include "main.h"

/**
 * print_line - prints out a single line with s bytes of a buffer @c
 * @c: text buffer to print form
 * @s: number of bytes to print from the buffer
 * @l: the line to print
 *
 * Return: Does not return a value.
 */

void print_line(char *c, int s, int l)
{
	int j, k;

	for (j = 0; j <= 9; j++)
	{
		if (j <= s)
			printf("%02x", c[l * 10 + j]);
		else
			printf("  ");
		if (j % 2)
			putchar(' ');
	}
	for (k = 0; k <= s; k++)
	{
		if (c[l * 10 + k] > 31 && c[l * 10 + k] < 127)
			putchar(c[l * 10 + k]);
		else
			putchar('.');
	}
}

/**
 * print_buffer - prints a buffer of text.
 * @b: buffer to print to stdout
 * @size: size of buffer to print
 *
 * Return: Does not return a value.
 */
void print_buffer(char *b, int size)
{
	int i;

	for (i = 0; i <= (size - 1) / 10 && size; i++)
	{
		printf("%08x: ", i * 10);
		if (i < size / 10)
		{
			print_line(b, 9, i);
		}

		else
		{
			/* Edge case where size is a multiple of 10 */
			print_line(b, size % 10 - 1, i);
		}
		putchar('\n');
	}
	if (size == 0)
		putchar('\n');
}
