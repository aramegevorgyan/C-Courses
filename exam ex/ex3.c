#include<stdio.h>

int sumArray(int arr[], int n)
{
	if (n == 0)
		return 0;
	else
		return arr[n-1] + sumArray(arr,n - 1);
	
}
int main()
{
	int arr[5];
	for(int i = 0;i<5;i++)
		scanf("%d", &arr[i]);
	int x = sumArray(arr,5);
	printf("%d",x);

	return 0;
}
