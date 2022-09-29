#include <stdlib.h>
#include <string.h>

/**
* pal_strlen - Finds the length of a string.
* @str: the string.
* @s: The starting index.
* @e: The ending index.
* Return: The length of the string.
*/
int pal_strlen(char *str, int s, int e)
{
	if (s == e)
		return (1);

	if (str[s] != str[e])
	return (0);

	if (s < e + 1)
		return (pal_strlen(str, s + 1, e - 1));

	return (1);
}

/**
* is_palindrome -  Checks to see if a string is a palindrome
* @s: The string to investigate
* Return: 1 if it IS a palindrome and 0 otherwise.
*/
int is_palindrome(char *s)
{
	int n;

	n = strlen(s);

	if (n == 0)
	{
		return (1);
	}

	return (pal_strlen(s, 0, n - 1));
}
