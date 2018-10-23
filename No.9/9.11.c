#include<stdio.h>
unsigned long Fibonacci(unsigned n);
int main(void)
{
	unsigned i;
	
	printf("Enter an integer:");
	scanf("%u",&i);
	printf("The result is %lu",Fibonacci(i));
	
	return 0;	
}

unsigned long Fibonacci(unsigned n)
{
	int i;
	unsigned long x,y,z;
	
	if(n<=2)
		return 1;
	else if(n==3)
		return 2;
	else if(n==4)
		return 3;
	else
	{	
		x=2;
		y=3;
		for(i=5;i<=n;i++)
		{
			z=x+y;
			x=y;
			y=z;
		}
		return z;
	}
}
