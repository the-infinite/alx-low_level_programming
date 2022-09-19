/**
 * _strlen - Calculates the length of a character sequence
 *
 * @s: A character sequence of any length
 *
 * Return: the length of s after calculating it.
*/

int _strlen(char *s)
{
	int counter;

	for (counter = 0; *s != '\0'; ++s)
	{
		++counter;
	}

	return (counter);
}
