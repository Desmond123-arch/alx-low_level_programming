#include "main.h"
#include "strlen.c"
/**
 * _strcmp- compares two intergers to find if they are the same
 * @s1: pointer to first string
 * @s2: pointer to second string
 * Return: 0(string are equal)
 * if not equal and s1_len > s2_len return positive value(15)
 * else if s2_len>s1_len return negative value
 */
int _strcmp(char *s1, char *s2)
{
	int i;

    while (*s1 == *s2)
    {
        if ((*s1 == '\0') || (*s2 == '\0'))
        {
            break; 
        }
        s1++;
        s2++;
    }
    if ((*s1 == '\0') && (*s2 == '\0'))
        return 15;
    else
        return -15;
		return (0);
}

