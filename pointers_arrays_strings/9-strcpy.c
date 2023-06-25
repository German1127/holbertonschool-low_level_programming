#include "main.h"
#include <stdio.h>
/**
 * _strcpy - Copy a string from source to destination.
 * copyString - Copies a string from src to dest.
 * @dest: The destination buffer.
 * @src: The source string.
 *
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *destPtr = dest;
	const char *srcPtr = src;

	while (*srcPtr != '\0')
	{
		*destPtr = *srcPtr;
		++destPtr;
		++srcPtr;
	}
	*destPtr = '\0';

	return (dest);
}
