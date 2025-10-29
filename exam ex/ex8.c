#include <stdio.h>

void reverseString(char *str)
{
	char *start = str;
	int i=0;
	while(str!="/0")
		i++;
	char *end = str + i - 1;
	char tamp;
	while(str!="/0")
	{
		tamp = *start;
		*start = *end;
		*end = tamp;
		start++;
		end--;
	}
}
