#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
*new_dog - function to create new struct dog
*@name: new dog name
*@age: new dog age
*@owner: new dog owner
*Return: new dog object
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = name;
	dog->age = age;
	dog->owner = owner;
	return (dog);
}
