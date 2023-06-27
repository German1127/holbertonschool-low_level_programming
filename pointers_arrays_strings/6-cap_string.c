#include "main.h"
/**
 * cap_string - Write a function that capitalizes all words of a string.
 *
 * return - return (s)
 *
 */
char *cap_string(char *s)
{
	char spc[] = {32, '\t', '\n', 44, ';', 46, '!', '?', '"', '(', ')', '{', '}','"'};
	int chek = 0;
	int chek2 = 13;
	int cont;

	while (s[chek])
{
cont = 0
	while (cont < chek2)
	{
		if ((chek == 0 || s[chek - 1] == spc[cont]) && (s[chek] >= 'a' && s[chek] =< 'z'))
			s[chek] -= 32;
	

cont++;
}
chek++;
}
return (s);
}
