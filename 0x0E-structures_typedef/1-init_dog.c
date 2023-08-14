#include "dog.h"
#include <stdlib.h>
/**
 * init_dog - function that inialize variable
 * @d: pointer to dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * 
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	(*d).name = name;
	d->age = age;
	d->owner = owner;
}
