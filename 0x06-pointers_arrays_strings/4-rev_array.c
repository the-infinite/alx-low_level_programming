/**
 * reverse_array - A function that reverses the order of the elements
 *					in an array of integers.
 *
 * @a: The array of integers to sort.
 * @n: The number of elements in the array to reverse.
 *
 * Return: Does not return a value.
*/

void reverse_array(int *a, int n)
{
	int temp, s, e;

	s = 0;
	e = n - 1; /* The index of the final element to sort. */

	/* While the ofrward index has not equalised with the backward index */
	while (s < e)
	{
		/* We store the value at the offset s inside a temporary variable */
		temp = a[s];

		/* Swap the elements at the offset s and e */
		a[s] = a[e];
		a[e] = temp;
		s++; /* Shift the forward index forward */
		e--; /* Shift the backward index backward */
	}
}
