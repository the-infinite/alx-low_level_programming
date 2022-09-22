/**
* rot13 - Rotates each character in a string by 13.
*
* @s: The string to encode in ROT-13
*
* Return: A pointer to @s after encoding it.
*/
char *rot13(char *s)
{
	char rotd[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM\0";

	char norm[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\0";

	for (int i = 0; s[i] != 0 && s[i] != '\n'; i++)
	{
		char c = s[i];

		char rot = c;

		for (int j = 0; j < 52; j++)
		{
			if (norm[j] == c) /* If we have found a match */
			{
				rot = rotd[j]; /*Return the rotated character*/
			}
		}

		s[i] = rot; /*Rotate this*/
	}

	return (s);
}
