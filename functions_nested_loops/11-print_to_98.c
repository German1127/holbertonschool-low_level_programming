#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void print_to_98(int n)
{
	int con;

	if (n <= 98)
	{
		for (con = n; con <= 97; con++)
			printf("%d, ", con);
	}
	else
	{
		for (con = n; con >= 97; con--)
			printf("%d, ", con);
	}
	printf("98\n");
}
