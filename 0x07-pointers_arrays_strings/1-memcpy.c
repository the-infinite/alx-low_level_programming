/**
 * _memcpy - function that copies contents of one region of memory to another.
 *
 * @dest: buffer where we will copy tt
 * @src: region we copy from.
 * @n: the number of bytes to copy from @src to @dest.
 *
 * Return: The pointer to dest after finishing
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		/*
		* I feel like we should also check to see if n is out of bounds
		* or at least make sure than n is a value that is safe to utilise
		* between the two arrays.
		*/
		dest[i] = src[i];
	}
	return (dest);
}
