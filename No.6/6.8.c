#include<stdio.h>
int main(void)
{
	float p,q;
	
	printf("Enter the number:");
	while(scanf("%f%f",&p,&q)==2)
	{
		printf("The result is£º%f\n",(p-q)/(p*q));
		printf("Enter next value(enter q to quit):");
	}
	printf("Done!");
	
	return 0;
 }

