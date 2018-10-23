#include<stdio.h>
double power(double n,int p);
double mul(double n,int p);
int main(void)
{
	double x, xpow;
	int exp;
	
	printf("Enter a number and the integer power to which\n");
	printf("the number will be raised.Enter q to quit.\n");
	while(scanf("%lf%d",&x,&exp)==2)
	{
		xpow=power(x,exp);
		printf("%.5g\n",xpow);
		printf("Enter next pair of numbers or q to quit.\n");
	}
	printf("Hope you enjoyed this power trip -- bye!\n");
	
	return 0;
}

double power(double n,int p)
{
	double pow=1;
	int i;
	
	if(n==0)
	{
		if(p==0)
		{
			printf("%.1g to the power %d is undefined.\n",n,p);
			return 1;
		}
		else
		{
			printf("%.3g to the power %d is ",n,p);
			return 0;
		}
	}
	else
	{
		if(p>0)
		{	
			pow=mul(n,p);
			printf("%.3g to the power %d is ",n,p);
		}
		else
		{
			n=1/n;
			p=-p;
			pow=mul(n,p);
			printf("%.3g to the power %d is ",1/n,-p);
		}
		
		return pow;
	}
}

double mul(double n,int p)
{	
	double result;
	
	if(p>0)
		result=n*mul(n,p-1);
	else
		result=1;
	
	return result;
	
}
