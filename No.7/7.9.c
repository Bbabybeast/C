#include<stdio.h>
int main(void)
{
	int prime,num;
	int i,flag,n=0;
	
	printf("Enter a positive number:");
	scanf("%d",&num);
	while(num>1)
	{
		printf("the prime number is:\n");
		for(prime=2;prime<=num;prime++)
		{
			flag=1;
			for(i=2;i*i<=prime;i++)
			{
				if(prime%i==0)
					flag=0;
			}
			if(flag)
			{
				printf("%4d ",prime);
				n++;
				if(n%5==0)
					printf("\n");
			}	
		}
		printf("\nEnter next value:");
		scanf("%d",&num);
		n=0;
	}
		
	return 0;
}
