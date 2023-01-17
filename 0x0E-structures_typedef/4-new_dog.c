#include "dog.h"
#include "string.h"
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
	dog_t *dog;
	char *dog_name,*owner_name;
	
	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog_name = malloc(strlen(name + 1) * sizeof(char));
	if (dog_name == NULL)
		return (NULL);

	owner_name = malloc(strlen(owner + 1) * sizeof(char));
	if (owner_name == NULL)
		return (NULL);

	strcpy(dog_name,name);
	strcpy(owner_name,owner);

	dog->name = dog_name;
	dog->age = age;
	dog->owner = owner_name;
	return (dog);
}

