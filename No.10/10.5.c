#include<stdio.h>
double func(double ar[],int n);
int main(void)
{
	double source[5]={1.1,2.2,3.3,4.4,5.5};
	
	printf("%f",func(source,5));
	
	return 0;
}
double func(double ptr[],int t)
{
	int i;
	double min,max;
	
	min=max=*ptr;
	for(i=1;i<t;i++)
	{
		if(*(ptr+i)>max)
			max=*(ptr+i);
		if(*(ptr+i)<min)
			min=*(ptr+i);
	}
	
	return max-min;
}
