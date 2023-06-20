#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all numbers to 98
 * @n: a number
 *
 * Return: eeded
 */
void print_to_98(int n)
{
	int con;

	if (n <= 98)
	{
		for (con = n; con < 98; con++)
			printf("%d, ", con);
	}
	else
	{
		for (con = n; con > 98; con--)
			printf("%d, ", con);
	}
	printf("98\n");
}
