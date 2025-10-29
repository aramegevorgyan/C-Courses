#include<stdio.h>

int main()
{
	int x[6];
	int i;
	for(i = 0; i < 6 ; i++)
	{
		printf("The %d element :: ", i + 1);
		scanf("%d", &x[i]);
	}
	for(i = 0; i<6;i++)
	{
		if(i%2 == 0)
			printf("number %d is %d \n" , i , x[i]);
	}
	return 0;
}
