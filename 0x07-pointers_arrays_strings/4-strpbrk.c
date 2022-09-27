/**
* _strpbrk - a function that searches a string for any sequence of characters.
*
* @s: the string we want to examine.
* @accept: the string we are looking for in @s.
*
* Return: a pointer to the character in @s that matches one in accept
* or NULL if no such character is found.
*/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (s + i);
			j++;
		}
		i++;
	}
	return ('\0');
}
