#include "main.h"
/**
 * _calloc - allocates memory for an array for an array
 * @nmemb: array of element
 * @size:size of bytes to be allocated
 * Return:pointer to allocated memory
 * all set to null
 * on error return NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	/* mem allocation and return verification */
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	/* set values to zero */
	memset(ptr, 0, (nmemb * size));
	return (ptr);
}

