#include "main.h"
/**
 * _strlen_recursion - Function
 * @s: punter
 * Retutn - 0
 */
int _strlen_recursion(char *s)
{
	int chek;

	if (*s != '\0')
	{
		return (+ 1 _strlen_recursion ( + 1));
	}
	return (0);
}
