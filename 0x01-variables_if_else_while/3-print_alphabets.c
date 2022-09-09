#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase, uppercase and a newline.
 *
 * Return: 0 always
*/

int main(void)
{
	char l = 'a';
	char u = 'A';

	/*  Print the lowecase characters first*/
	while (l <= 'z')
	{
		putchar(l);
		++l;
	}

	/*print A - Z*/
	while (u <= 'Z')
	{
		putchar(u);
		++u;
	}
	putchar('\n');

	return (0);
}
