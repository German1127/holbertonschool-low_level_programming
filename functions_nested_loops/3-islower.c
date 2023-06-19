#include "main.h"
/**
 * _islower -
 *
 * Return: lowercase
 */
int _islower(int c)
{
	char x;
	int lowercase = 0;

	for (x = 'a'; x <= 'z'; x++)
		if (x == c)
			lowercase = 1;
	return (lowercase);
}
