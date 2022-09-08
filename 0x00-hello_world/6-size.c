#include <stdio.h>

/**
* main - The entry point of this program.
* Description: Prints the sizes of the numerous primitive data types for
* the underlying CPU architecture.
* Return: Always returns 0. So, always successful.
*/
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
