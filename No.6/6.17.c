#include<stdio.h>
#define SUM 100
int main(void)
{
	int i;
	float sum;
	
	for(sum=100,i=0;sum>0;i++)
	{
		sum+=sum*0.08;
		sum-=10;
	}
	printf("%d years.",i);
	
	return 0;
}
