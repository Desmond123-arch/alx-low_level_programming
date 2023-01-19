#include "3-calc.h"
/**
 * op_add - return sum of 2 integers
 * @a : first int
 * @b : second int
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - return difference between and b
 * @a: first int
 * @b:second int
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - return product of a and b
 * @a: first int
 * @b:second int
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides a and b
 * @a:first int
 * @b:second int
 * Return:quotient
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - remainder of a mod b
 * @a: first int
 * @b: second int
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error");
		exit(100);
	}
	return (a % b);
}
