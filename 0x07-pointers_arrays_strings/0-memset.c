/**
* _memset - Assigns every index from 0 to n - 1 in an array to b
* @s: The region of memory to flash with b.
* @b: The character to flash everywhere in b.
* @n: The size of the array. The upper limit in this function is n -1.
* Return: A pointer to the original string after editting it.
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		/* Somehow, I feel like we should check if this causes a SegFault */
		s[i] = b;
	}

	return (s);
}
