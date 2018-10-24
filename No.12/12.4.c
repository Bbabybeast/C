#include<stdio.h>
int count=0;
int func(void);

int main(void)
{
	int total,num;
	
	while(scanf("%d",&num)==1)
	{	
		total=func();
		printf("%d\n",total);
	}
	printf("Done...");
	
	return 0;		
} 

int func(void)
{
	count+=1;
	return count;
}
