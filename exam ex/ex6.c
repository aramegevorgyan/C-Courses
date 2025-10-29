#include<stdio.h>

float calculateAverage(int *arr, int n)
{
	int x = 0;
	for(int i=0;i<n;i++)
		x=(*arr+i)+ x;
	return x/n;
}
int main()
{
	int arr[] = {1,2,3,4,5};
	int y = calculateAverage(arr,5);
	printf("%d",y);
	return 0;
}
