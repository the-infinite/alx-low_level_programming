#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all digits in base 10
 *
 * Return: 0 always
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		printf("%i", digit);
		++digit;
	}
	printf("\n");

	return (0);
}
