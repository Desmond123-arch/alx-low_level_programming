#include "dog.h"
/**
 * init_dog - intializes the dog struct
 * @d: pointer to struct
 * @name: pointer to name of doge
 * @age: to age of do
 * @owner: pointer to name of the owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
