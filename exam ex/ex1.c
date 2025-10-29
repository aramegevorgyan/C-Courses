#include <unistd.h>
#include <stdio.h>

int main()
{
	int x [10];
	int i , max ,min;
	for(i = 0;i<10;i++)
	{
		printf("Write number %d :: ",i+1);
		scanf("%d",&x[i]);
	}
	max = x[0];
	min = x[0];
	for(i = 0;i<10;i++)
	{
		if(min>=x[i])
		{
			min = x[i];
		}
		if(max<=x[i])
		{
			max = x[i];
		}
	}
		printf("max is%d\n min is %d\n",max,min);
	return 0;
}
