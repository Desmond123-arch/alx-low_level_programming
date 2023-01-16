#include "dog.h"
/**
 * free_dog - frees memory occupied by struct dogs
 * @d : pointer to struct dog
 */
void free_dog(dog_t *d)
{
	dog_t *dog = d;

	free(dog);
}
