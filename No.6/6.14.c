#include<stdio.h>
int main(void)
{
	double d[8];
	double s[8];
	int i,sum;
	
	for(i=0;i<8;i++)
	{
		printf("Enter the no.%d figure:",i+1);
		scanf("%lf",&d[i]);
	}
	s[0]=d[0];
	for(i=1;i<8;i++)
	{
		s[i]=s[i-1]+d[i];
	}
	for(i=0;i<8;i++)	//printf d[8]
	{
		printf("%10.2f",d[i]);
	}
	printf("\n");	
	for(i=0;i<8;i++)	//printf s[8]
	{
		printf("%10.2f",s[i]);
	}
	printf("\nDone!");
	
	return 0;
}
