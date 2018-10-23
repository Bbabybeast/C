#include<stdio.h>
void func(double *,double *,double *);
int main(void)
{
	double x,y,z;
	
	scanf("%lf%lf%lf",&x,&y,&z);
	func(&x,&y,&z);
	
	return 0;
}

void func(double *a,double *b,double *c)
{
	double tem;
	
	if(*a<*b)
	{
		if(*a<*c)
		{
			*a=*a;
			if(*b<*c)
				*b=*b;
			else
				*b=*c;
		}
		else
		{	
			tem=*a;
			*a=*c;
			*c=*b;
			*b=tem;
		}
	}
	else
	{
	
		if(*b<*c)
		{
			if(*c<*a)
			{
				tem=*a;
				*a=*b;
				*b=*c;
				*c=tem;
			}
			else
			{
				tem=*a;
				*a=*b;
				*b=tem;
			}
		}
		else
		{
			tem=*a;
			*a=*c;
			*c=tem;
		}	
	}
	printf("%f,%f,%f",*a,*b,*c);
}
