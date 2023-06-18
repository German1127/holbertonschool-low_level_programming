#include "main.h"
/**
 * main - check the code.
 *
 * Return: Always 0.
 */
int _isalpha(int c)
{
	char a, b;
	int x = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		for(b = 'A'; b <= 'Z'; b++)
		{
			if(c == a || c == b)
				x = 1;
		}
	}
	return (x);
}
