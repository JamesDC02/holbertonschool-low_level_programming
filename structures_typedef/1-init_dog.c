#include "dog.h"
#include <stdlib.h>
/**
* init_dog - initialises a variable of type struct dog
* @d: pointer to initialise
* @name: name for dog
* @age: age for dog
* @owner: owner for dog
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
