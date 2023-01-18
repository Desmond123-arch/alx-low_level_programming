#include "function_pointers.h"
/**
 * array_iterator - executes a functin given as a parmeter
 * @size : size of array
 * @action : pointer to function to be performed
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	/* check various guards of function */
	if ((array != NULL) && (action != NULL))
	{
		/* iterate over each element and perfome action */
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
