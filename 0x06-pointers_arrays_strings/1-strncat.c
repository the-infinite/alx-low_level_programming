/**
 * _strncat - concatenates no more than n characters of two strings src & dest
 *
 * @dest: the string to concatenate to
 * @src: the string to concatenate from
 * @n: most number of bytes to copy from @src
 *
 * Return: a reference to @dest, the string we copied to.
*/
char *_strncat(char *dest, char *src, int n)
{
	int c = 0;
	int i;

	/* find length of dest */
	while (dest[c])
	{
		c++;
	}

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[c + i] = src[i];
	}

	dest[c + i] = '\0';
	return (dest);
}
