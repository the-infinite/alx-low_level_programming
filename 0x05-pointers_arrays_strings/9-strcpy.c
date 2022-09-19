/**
 * _strcpy - copies the contents of one string into another.
 *
 * @src: the string to copy from
 * @dest: the string to copy to
 *
 * Return: the string we have copied
*/

char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b; /*We do this here s after we are done, we termiante the string*/
	}
	dest[b] = '\0'; /* Terminate the string*/

	return (dest);
}
