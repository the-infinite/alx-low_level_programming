#include <stdlib.h>

/**
 * create_array - Creates an array of characters with exactly @size elements
 * and initializes every offset to @c.
 *
 * @size: The size of the array to create.
 * @c: Character to initialise the entire array with.
 *
 * Return: An array of size @size with all entries being @c
*/

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *a;

	if (size == 0)
	{
		/* There is nothing to do here. */
		return (NULL);
	}

	a = malloc(size * sizeof(char));

	if (a == NULL)
	{
		/* If we are unable to allocate memory */
		return (NULL); /* Return null */
	}

	for (i = 0; i < size; i++)
		a[i] = c;

	return (a);
}
