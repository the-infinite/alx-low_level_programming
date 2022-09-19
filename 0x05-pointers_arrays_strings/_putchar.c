#include <unistd.h>

/**
 * _putchar - writes a single character to standard output
 * @c: The character to write
 *
 * Return: 1 on success, and -1 on failure.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
