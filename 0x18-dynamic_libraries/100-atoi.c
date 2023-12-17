#include <stdio.h>
#include <stdlib.h>
/**
 * atoi - converts string to int
 * @s - pointer
 */

int _atoi(char *s) 
{
	int result = 0;
	int sign = 1;
	int i = 0;

	while (s[i] == ' ') 
	{
    		i++;
	}

	if (s[i] == '+' || s[i] == '-') 
	{
    		if (s[i] == '-') 
		{
        		sign = -1;
		}
		 i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = result * 10 + (s[i] - '0');
		i++;
	}

	return ( sign * result);
}
