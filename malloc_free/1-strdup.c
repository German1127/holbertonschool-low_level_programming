#include "main.h"
#include <stdlib.h>
/**
 * _strdup - Function that returns a pointer to a newly allocated space
 * in memory, which contains a copy of the string given as a parameter
 *
 * @str: An input pointer
 * Return: A pointer to a newly allocated space in memory *
 */
char *_strdup(char *str)
{
	char *a, *b;
	int c = 0, d = 0;

	if (str == NULL)
		return (NULL);

	b = str;

	while (*str)
	{
		d++;
		str++;
	}

	str = b;
	a = malloc(sizeof(char) * (d + 1));
	b = a;

	if (a != NULL)
	{
		for (; c < d; c++)
		{
			a[c] = *str;
			str++;
		}
		a[c] = '\0';
		return (b);
	}
	else
		return (NULL);
}
