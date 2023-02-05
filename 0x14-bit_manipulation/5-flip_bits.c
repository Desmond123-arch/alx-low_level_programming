#include "main.h"
/**
 * flip_bits - number of bits to be flipped to get another number
 * @n: first number
 * @m: second number
 * Return:number of bits needed to be flipped to get
 * the second number
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int c = n ^ m;
	unsigned int count = 0;

	while (c)
	{
		count += c & 1;
		c >>= 1;
	}
	return (count);
}
