#include "main.h"
/**
 * set_bit - set the value of a bit to 1 at a given index
 * @n : numbers whose bit is to be set
 * @index: index of the bit to be set
 * Return: value of the new number
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 8)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
