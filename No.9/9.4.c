#include<stdio.h>
double func(double,double);
int main(void)
{
	double i,j;
	
	scanf("%lf%lf",&i,&j);
	printf("%f",func(i,j));
	
	return 0;
}

double func(double n,double m)
{
	double tem;
	
	tem=(1/n+1/m)/2;
	
	return 1/tem;
}
