#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print the alphabet in descending order
 *
 * Return: Always 0
*/

int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c--);
	}
	putchar('\n');

	return (0);
}
