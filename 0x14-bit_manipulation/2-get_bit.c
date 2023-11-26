#include "main.h"
/**
 * get_bit - find the value of a bit at a given index
 * @n: number  entered
 * @index: index to whose bit needs to be checked
 * Return: bit at the given index on error return -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	mask = 1 << index;
	return ((n & mask) != 0);
}
