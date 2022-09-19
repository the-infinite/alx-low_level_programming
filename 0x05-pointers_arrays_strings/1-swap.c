/**
 * swap_int - swaps the values of two integers using their references as basis
 *
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: Does not return a value
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *b; /* Save b in a temporary variable */
	*b = *a; /* Set the value of B to A */
	*a = temp; /* set the value of a to the original value of B */
}
