#include <stdio.h>

/**
 * print_diagsums - print the sum of the diagonals of a square matrix.
 * @a: A pointer to this matrix
 * @size: size of the matrix
 *
 * Return: Does not return a value.
*/

void print_diagsums(int *a, int size)
{
	int i, S1, S2;

	S1 = 0; /* The sum of the diagonal from top left to bottom right */
	S2 = 0; /* The sum of the diagonal from top right to bottom left */

	/* While we still have numbers to look for in both matrices */
	for (i = 0; i < (size * size); i++)
	{
		/*
		* If this offset is divisible by the number of rows(or columns) in the
		* matrix + 1, it is safe to assume it falls on the diagonal path that
		* grows from top left to bottom right.
		*/
		if (i % (size + 1) == 0)
		{
			/* Add the number at this offset to our first sum */
			S1 += a[i];
		}

		/*
		* If this offset is divisible by size-1, less than size x size - 1
		* and not 0, then it is safe to say that it falls into the diagonal
		* top right to bottom left. This is true because, if we have a 3X3
		* matrix, this diagonal is from the index 2, 4, 6. If we do not stop
		* before i == size x size - 1, we would also include the number at
		* index 8. Hence why we check if this element is before the last
		* element is to avoid this error since none other can pass otheriwise
		* till the last element.
		*/
		if (i % (size - 1) == 0 && i != 0 && i < (size * size) - 1)
		{
			/*Add the number at this position to our second sum*/
			S2 += a[i];
		}
	}
	printf("%d, %d\n", S1, S2);
}
