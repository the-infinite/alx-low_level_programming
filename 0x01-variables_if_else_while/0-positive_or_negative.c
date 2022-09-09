#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* main - The entry point for this function.
* Description: This is a function that tests and tells whether a random number
* generated is positive, negative, or zero.
* Return: 0 all the time.
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n == 0)
		printf("%d is zero\n", n);
	else if (n > 0)
		printf("%d is positive\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
