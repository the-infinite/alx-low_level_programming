/**
 * _strcat - Copies the contents of one string directly to another
 *
 * @dest: string we want to concatenate to
 * @src: string we want to concatenate from
 *
 * Return: a pointer to the resulting string after the concatentaion @dest
*/

char *_strcat(char *dest, char *src)
{
	int c = 0;
	int c2;

	/* first, we must find the length of dest */
	while (dest[c])
	{
		c++;
	}

	/* next, we iterate through each character in src omitting null */
	for (c2 = 0; src[c2] ; c2++)
	{
		dest[c++] = src[c2];
	}

	return (dest);
}
