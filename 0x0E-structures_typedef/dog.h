#ifndef DOG_H
#define DOG_H
#include "stdio.h"
#include "stdlib.h"
/**
 * struct dog - typedef for struct dog
 * @name: stores name
 * @age: stores age
 * @owner:stores owners name
 * Description: stores the details of dogs
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
}dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
