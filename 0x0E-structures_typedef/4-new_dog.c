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
	char *name_dog;
	char *owner_name;
	float age_dog = age; 
	dog_t *dog = malloc(sizeof(dog_t));

	/*malloc space for strings */
	name_dog = malloc(strlen(name) + 1);
	owner_name = malloc(strlen(owner) + 1);

	/* check for malloc return */
	if (name_dog == NULL)
		return (NULL);
	if (owner_name == NULL)
		return (NULL);

	strcpy(name_dog, name);
	strcpy(owner_name,owner);

	dog->name = name_dog;
	dog->age = age_dog;
	dog->owner = owner;
	return (dog);
}

