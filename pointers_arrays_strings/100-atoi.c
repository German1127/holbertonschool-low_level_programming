#include "main.h"
#include <stdio.h>
/**
 * _atoi - Convert a string to an integer.
 * @s: The string to convert.
 *
 * Return: The converted integer value.
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int digit;

	while (*s == ' ')
	{
		s++;
	}

	if (*s == '-' || *s == '+')
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		s++;
	}
}
