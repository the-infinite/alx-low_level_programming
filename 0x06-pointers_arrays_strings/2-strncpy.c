/**
 * _strncpy - A function that copies at most n characters from a string
 *
 * @dest: the destination or where to copy to
 * @src: the source or where to copy from.
 * @n: the longest number of bytes to copy from @src
 *
 * Return: A poniter to @dest, the string we have copied
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	while (i < n) /* Fill the buffer with null bytes */
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
