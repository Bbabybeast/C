#include<stdio.h>
int main(void)
{
	int up,low;
	int sum=0;
	
	printf("Enter lower and uper integer limits:");
	scanf("%d%d",&low,&up);
	while(low<up)
	{	
		
		for(;low<=up;low++)
		{
			sum+=low*low;
		}
		printf("The sums of the squares from %d to %d is %d\n",low*low,up*up,sum);
		printf("Enter next set of limits:");
		scanf("%d%d",&low,&up);		
	}
	printf("Done");
	
	return 0;
}
