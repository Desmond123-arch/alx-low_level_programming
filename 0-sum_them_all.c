#include "variadic_functions.h"
/**
 * sum_them_all - sums all the parameters passed in
 * @n : number of arguments to be summed
 * Return: sum of the parameters
 * return 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned  int i;
	va_list args;

	/*check condition */
	if (n == 0)
		return (0);
	/* start variadic */
	va_start(args, n);

	/* for loop for sum */
	for (i = 0; i < n; i++)
		sum += va_arg(args, int);
	va_end(args);
	return (sum);
}
