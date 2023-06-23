#include "main.h"
/**
 * char - check the code
 *@str - XD
 * Return: Always 0.
 */
void puts2(char *str)
{
	int a;
	int b = 0;
	for (a = 0; str[a] != '\0'; a++)

	a -= 1;

	for (b = 0; b <= a; b += 2)
		_putchar(str[a]);

	_putchar ('\n');
}
