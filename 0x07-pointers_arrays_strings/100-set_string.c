#include "main.h"
#include <stdio.h>

/**
* set_string - Sets the value of a given string to that of another.
* @s: A pointer to the string we want to edit.
* @to: The string we want to replace its value with.
* Return: Does not return a value.
*/
void set_string(char **s, char *to)
{
	*s = to;
}
