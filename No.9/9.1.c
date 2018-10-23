#include<stdio.h>
double min(double,double);
int main(void)
{
	double x,y;
	scanf("%lf%lf",&x,&y);
	printf("%f",min(x,y));
	
	return 0;
}
double min(double i,double j)
{
	return (i<j)? i:j;
}
