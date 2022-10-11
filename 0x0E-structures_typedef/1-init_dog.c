#include <stdio.h>
#include "dog.h"

/**
*init_dog - Initialize the dog struct
*@d: the pointer to the struct
*@name: dog name
*@age: dog age
*@owner: dog owner
*Return: void
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
