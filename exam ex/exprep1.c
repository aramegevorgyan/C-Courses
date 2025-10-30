#include<stdio.h>

int main()
{
	int n = 5;
	int num[5];
	float temp;
	for(int i = 0; i < n;i++ )
	{
		scanf("%d",&num[i]);
		temp +=num[i];
	}
	temp = temp/n;
	printf("%f",temp);
	return 0;
}
