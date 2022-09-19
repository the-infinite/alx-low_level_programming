/**
 * _atoi - Converts a string to an integer
 *
 * @s: string to convert to an integer
 *
 * Return: The numerical value of the string in base 10.
*/

int _atoi(char *s)
{
	unsigned int sum = 0;
	int sign = 1; /* We first assume the sumber is positive */

	do {
		if (*s == '-')
		{
			sign *= -1; /*If we found a negative symbol,then it is negative*/
		}

		else if (*s >= '0' && *s <= '9')
		{
			/* Add the raw value of this sumber to the sum */
			/* We subtract the literal for 0 to convert this to a number */
			sum = (sum * 10) + (*s - '0');
		}

		else if (sum > 0)
		{
			break;
		}
	} while (*s++);

	return (sum * sign);
}
