include "main.h"
/**
 * swap_int - swaps the value of passed in numbers(addresses)
 * @a: first value's address is passed in
 * @b: second value's address is passed in
 */
void swap_int(int *a, int *b)
{
	*a = *a  + *b;
	*b = *a - *b;
	*a = *a - *b;
}
