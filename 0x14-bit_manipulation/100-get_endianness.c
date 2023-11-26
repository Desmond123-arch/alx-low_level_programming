#include "main.h"
/**
 * get_endianness - checks the endianness of a file
 * Return: 0 if big endian or 0 otherewise
 */
int get_endianness(void)
{
	unsigned int check = 1;
	char *endian = (char *)&check;

	if (*endian)
		return (1);
	return (0);
}
