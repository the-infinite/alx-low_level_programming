/**
 * _strstr - a function that locates a substring in a given string @haystack.
 *
 * @haystack: the string to locate the given substring in.
 * @needle: substring to look out for.
 *
 * Return: a pointer to the beginning of the located substring if found
 * or NULL.
*/

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;

		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}

		if (!*n)
		{
			/*We are at end*/
			return (h);
		}
		haystack++;
	}
	return ('\0');
}
