/**
 * rev_string - reverses the contents of a character sequence
 *
 * @s: the string to reverse.
 *
 * Return: Does not return a value.
*/

void rev_string(char *s)
{
	int l, i;
	char ch;

	/*find string length without null char*/
	for (l = 0; s[l] != '\0'; ++l)
		;

	/* Swap by looping through half of the string */
	for (i = 0; i < l / 2; ++i)
	{
		ch = s[i];
		/* The extra -1 here is to align the value to an offset*/
		s[i] = s[l - 1 - i];
		s[l - 1 - i] = ch;
	}

}
