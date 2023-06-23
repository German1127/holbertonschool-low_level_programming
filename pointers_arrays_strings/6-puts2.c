#include "main.h"
/**
 * puts2 - Prints every second character of a string followed by a new line.
 * @str: The input string.
 *
 * Return: Always void.
 */
void puts2(char *str)
{
	int a;
	int b = 0;
	for (a = 0; str[a] != '\0'; a++)

	a -= 1;

	for (; b <= a; b += 2)
		_putchar(str[a]);

	_putchar('\n');
}
