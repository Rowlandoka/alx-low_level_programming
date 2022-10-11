#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
*print_dog - function to print struct dog
*@d: dog to print
*Return: 0
*/
void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);

		printf("Age: %d\n", d->age);
		if (d->owner == NULL)
			printf("Owner: (nil)\n");
		else
			printf("Owner: %s\n", d->owner);
	}
}
