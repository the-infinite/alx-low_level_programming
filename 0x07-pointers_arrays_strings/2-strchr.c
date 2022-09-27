/**
 * _strchr - a function that locates the location of a character in a string.
 *
 * @s: pointer to our string to check
 * @c: character to locate from the string
 *
 * Return: a pointer to the first occurence of charatcer or null if not found.
 *	Hence, this returns a substring from the location where the first value
 *	of n is found.
*/

char *_strchr(char *s, char c)
{
	char *res = s;

	while (*res != '\0')
	{
		if (*res == c)
			return (res);
		res++;
	}
	/**
	 * if c is '\0', you should return
	 * the pointer to the '\0' of the
	 * string s
	*/
	if (*res == c)
	{
		return (res);
	}

	/*return null if not found*/
	return ('\0');
}
