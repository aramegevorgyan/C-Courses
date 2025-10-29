#include <stdio.h>
void copyString(char *source, char *destination)
{
	while(source!="/0")
	{
		*destination = *source;
		destination++;
		source++;
	}
	destination = "/0";
}
