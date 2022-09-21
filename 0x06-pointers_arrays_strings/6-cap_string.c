/**
* cap_string - Shifts all lowercase characters in a string to uppercase values
*
* @s: The string to modify
*
* Return: A pointer to @s after modifying it.
*/

char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0') /* While not at end */
	{
		if (s[i] >= 97 && s[i] <= 122) /* If this is a lowercase character*/
		{
			if (i == 0) /* If this is the first character in the string... */
			{
				s[i] -= 32;
			}

			if (s[i - 1] == 32 || s[i - 1] == 9 || s[i - 1] == 10 ||
				s[i - 1] == 44 || s[i - 1] == 59 || s[i - 1] == 46 ||
				s[i - 1] == 33 || s[i - 1] == 63 || s[i - 1] == 34 ||
				s[i - 1] == 40 || s[i - 1] == 41 || s[i - 1] == 123 ||
				s[i - 1] == 124) /* If we find a match, modify */
			{
				s[i] -= 32;
			}
		}
		i++;
	}
	return (s);
}
