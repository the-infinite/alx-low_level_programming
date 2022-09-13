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
	int i;

	for (i = 0; i < 8; ++i)
	{
		_putchar(str[i]);
	}
	_putchar('\n');

	return (0);
}
