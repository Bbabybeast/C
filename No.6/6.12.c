#include<stdio.h>
int main(void)
{
	int i,k,n;
	float sum,Sum;
	
	
	printf("Enter the number of times:");
	scanf("%d",&i);
	while(i>0)
	{
		sum=Sum=0;
		n=-1;
		for(k=1;k<i+1;k++)
		{
			n*=(-1);
			sum+=n*1.0/k;
			Sum+=1.0/k;
	 	}
		printf("The result of line 1 is:%f\n",Sum);
		printf("The result of line 2 is:%f\n",sum);
		printf("Enter next set of times:");
		scanf("%d",&i); 
	}
	printf("Done!");
	
	return 0;
}
