#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Is a structure with variables.
 * @name: The vaiable with the name of the dog.
 * @age: The variable with the age of the dog.
 * @owner: The variable with the name of the owner of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
