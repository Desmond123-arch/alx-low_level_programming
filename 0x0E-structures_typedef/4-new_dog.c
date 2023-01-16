#include "dog.h"
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age:age of dog
 * @owner: owners of dog
 * Return: pointer(to struct dog) for success
 * and on error return NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog -> name = name;
	dog -> age = age;
	dog -> owner = owner;
	return (dog);
}

