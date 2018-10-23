#include<stdio.h>
void larger_of(double *,double *);
int main(void)
{
	double i,j;
	
	scanf("%lf%lf",&i,&j);
	larger_of(&i,&j);
	printf("i=%f , j=%f",i,j);
	
	return 0;
}

void larger_of(double * x,double * y)
{
	double tem;
	
	if(*x>*y)
	{
		tem=*x;
		*y=tem;
	}
	else
	{
		tem=*y;
		*x=tem;
	}	
}
