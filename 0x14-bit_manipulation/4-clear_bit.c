#include "main.h"
/**
 * clear_bit - sets the value at a given index to 0
 * @n: value of the number
 * @index: index of bit to be set to zero
 * Return: value of new number
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}

