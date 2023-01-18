#include "function_pointers.h"
/**
 * int_index - searches for an interger
 * @array : pointer to first member of array
 * @size : size of array
 * @cmp: function used for a comparision
 * Return: index of found number
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	/* check for various guards for function */
	if (array != NULL && cmp != NULL)
	{
		if (size <= 0)
			return (-1);
		/* iterate over each member and perform the action */
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
