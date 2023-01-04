#include "main.h"
#include "stdio.h"
#include "0-memset.c"
#include "string.h"
int main(void)
{
	char buffer[10];
	memset(buffer,'a',5);
	int i = 0;
	memset(buffer+5,'b',5);

	for ( i = 0; i < 10; i++)
	{
		printf("%c",buffer[i]);
	}
	printf("\n");
	return (0);
}
