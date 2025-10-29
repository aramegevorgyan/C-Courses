#include <stdio.h>


void reverseArray(int *arr, int n)
{
	int *start= arr;
	int *end = arr+n -1;
	int tamp;
	while(start<end)
	{
		tamp = *end;
		*end = *start;
		*start = tamp;
		start++;
		end--;
	}

	
}
