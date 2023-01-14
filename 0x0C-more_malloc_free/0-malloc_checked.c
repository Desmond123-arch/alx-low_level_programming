#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b:set to 98
 */
void *malloc_checked(unsigned int b)
{
	void  *ptr = malloc (b);

	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}

