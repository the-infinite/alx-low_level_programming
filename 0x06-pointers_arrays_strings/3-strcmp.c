/**
 * _strcmp - compares two strings by comparing their contents to each other
 *
 * @s1: string we compare to @s2
 * @s2: string we compare to @s1
 *
 * Return: 0 if @s1 and @s2 are equal
 *        a negative integer if the trailing character
 *                in @s1 is less than the trailing
 *                character in @s2
 *        positive integer if the trailing character
 *                in @s1 was greater than the trailing
 *                character in @s2
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int r;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			r = s1[i] - s2[i];
			break;
		}
		else
		{
			r = s1[i] - s2[i];
		}
		i++;
	}

	return (r);
}
