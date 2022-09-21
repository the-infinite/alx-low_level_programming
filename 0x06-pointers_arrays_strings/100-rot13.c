/**
* rot - calculates the rotated value of a single character.
* @c: The character to rotate.
* Return: The rotated value of the character.
*/
char rot(char c)
{
	char *rotd = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM\0";
	char *norm = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ\0";

	for (int i = 0; norm[i] != 0; i++)
	{
		if (norm[i] == c) /* If we have found a match */
		{
			return (rotd[i]); /*Return the rotated character*/
		}
	}

	return (c); /* Found no match? Just return the character! */
}

/**
* rot13 - Rotates each character in a string by 13.
*
* @s: The string to encode in ROT-13
*
* Return: A pointer to @s after encoding it.
*/
char *rot13(char *s)
{
	for (int i = 0; s[i] != 0; i++)
	{
		s[i] = rot(s[i]); /* Just rotate */
	}

	return (s);
}
