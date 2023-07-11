#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints information about a dog structure.
 * @d: Pointer to the dog structure.
 *
 * Description: This function prints the name, age, and owner of a dog structure.
 * If any of the fields are NULL, it prints "(nil)" in their place.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
	{
		printf("Name: (nil)\n");
	}
	else
	{
		printf("Name: %s\n", d->name);
	}
	if (d->age == 0.0)
	{
		printf("%f, Age: 0.000000\n", 0.0);
	}
	else
	{
		printf("Age: %f", d->age);
	}
	if (d->owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	else
	{
		printf("Owner: %s\n", d->owner);
	}
}
