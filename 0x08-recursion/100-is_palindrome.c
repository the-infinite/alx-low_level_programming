#include <stdlib.h>

/**
* pal_strlen - Finds the length of a string.
* @s: the string.
* Return: The length of the string.
*/
int pal_strlen(char *s)
{
	int len = 0;

	while (s[len++])
		;

	return (len);
}

/**
* pal_str_equal - Checks to see if two strings are equal.
* @a:  First string.
* @b:  Second string.
* Return: 1 is @a is @b and 0 otherwise.
*/
int pal_str_equal(char *a, char *b)
{
	int sa, sb, i;

	sa = pal_strlen(a);
	sb = pal_strlen(b);

	if (sa != sb)
	{
		return (0);
	}

	for (i = 0; i < sa; i++)
	{
		if (a[i] != b[i])
		{
			return (0);
		}
	}

	return (1);
}

/**
* pal_rev_string - Reverses a string.
* @s: The string to reverse.
* Return: the string reversed.
*/
char *pal_rev_string(char *s)
{
	int bound, i;

	bound = pal_strlen(s) - 1;

	if (bound < 0)
	{
		return ("");
	}

	char *ret = malloc(sizeof(char) * (bound + 1));

	for (i = 0; i < bound; i++)
	{
		ret[i] = s[bound - i];
	}

	return (ret);
}


/**
* is_palindrome -  Checks to see if a string is a palindrome
* @s: The string to investigate
* Return: 1 if it IS a palindrome and 0 otherwise.
*/
int is_palindrome(char *s)
{
	return (pal_str_equal(s, pal_rev_string(s)));
}
