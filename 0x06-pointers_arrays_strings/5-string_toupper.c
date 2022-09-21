/**
 * string_toupper - Changes all lowercase characters in a string to uppercase
 *
 * @s : The string we want to modify.
 *
 * Return: A pointer to @s after modifying it.
*/

char *string_toupper(char *s)
{
	int i = 0;

	while (s[i] != '\0') /* While not at end */
	{
		if (s[i] >= 97 && s[i] <= 122) /*If this is in the lowercase range */
		{
			s[i] = s[i] - 32; /*Subtract 32 to conver it to uppercase */
		}
		i++; /* move forward */
	}
	return (s);
}
