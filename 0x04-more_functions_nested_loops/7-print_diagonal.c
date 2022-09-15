#include"main.h"

/**
 * print_diagonal - print a diagonal line
 *
 * @n: is the number of times the \ character
 *     should be printed
*/

void print_diagonal(int n)
{
	int pos, spc;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (pos = 1; pos <= n; ++pos)
		{
			for (spc = 1; spc <= pos; ++spc)
			{
				_putchar(' ');
			}
			_putchar('/');
			_putchar('\n');
		}
	}
}
