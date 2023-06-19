#include "main.h"
/**
 * _isalpha - Checks if a character is alphabetic.
 * @c: The character to check.
 *
 * Return: 1 if `c` is an alphabetic letter, 0 otherwise.
 */
int _isalpha(int c)
{
	char a, b;
	int x = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		for (b = 'A'; b <= 'Z'; b++)
		{
			if (c == a || c == b)
				x = 1;
		}
	}
	return (x);
}
