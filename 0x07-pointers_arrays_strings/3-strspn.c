/**
 * _strspn - a function that gets the length of a prefix substring. Which means
 * it gets the number of bytes in a string that can be found in accept starting
 * from the front f the string.
 *
 * @s: the string to compare with accept.
 * @accept: string to get our values from -- our template if you will.
 *
 * Return: the number of bytes in the initial segment that only contain bytes
 * from accept.
*/

unsigned int _strspn(char *s, char *accept)
{
	int i, j, f;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		f = 1;

		/* While not at end of our template. */
		while (accept[j] != '\0')
		{
			/*
			** Compare the current character in s to the current character
			** in our template.
			*/
			if (s[i] == accept[j])
			{
				f = 0; /*success*/
				break;
			}
			j++;
		}
		if (f == 1)
			break;
		i++;
	}

	return (i);
}
