/**
 * leet - a function that encodes a string to hack3r dialogue
 *
 * @s: The string to encode.
 *
 * Return: A pointer to the string after we encode it.
*/

char *leet(char *s)
{
	int i;
	int c = 0;
	int sl[] = {97, 101, 111, 116, 108};
	int ul[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (s[c] != '\0') /* While not at end...*/
	{
		for (i = 0; i < 5; i++) /* We only loop 5 times */
		{
			if (s[c] == sl[i] || s[c] == ul[i]) /* If you find any matches */
			{
				s[c] = n[i]; /* Replace them with the charactes to swap */
				break;
			}
		}
		c++;
	}
	return (s);
}
