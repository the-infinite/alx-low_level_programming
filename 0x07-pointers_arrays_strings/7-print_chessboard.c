#include "main.h"

/**
 * print_chessboard - prints the chess board
 *
 * @a: Input string pointing to a chessboard
 *
 * Return: Does not return a value.
*/

void print_chessboard(char (*a)[8])
{
	int i, j;

	i = 0;
	j = 0;

	while (i < 64)
	{
		/*If i is divisible by 8 and i is not 0*/
		if (i % 8 == 0 && i != 0)
		{
			j = i;
			/*We print a newline because this is the end of a row*/
			_putchar('\n');
		}

		_putchar(a[i / 8][i - j]);
		i++;
	}
	_putchar('\n');
}
