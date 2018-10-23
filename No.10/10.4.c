#include<stdio.h>
int func(double ar[],int n);
int main(void)
{
	double source[]={1000.1,2.2,3.3,4.4,5.5,9.1,487,6.16,78};
	
	printf("The max number is No.%d",func(source,9));
	
	return 0;
}

int func(double ptr[],int n)
{
	int i,max;
	double max_num;
	
	for(i=0,max=i,max_num=*(ptr+i);i<n;i++)
	{
		if(max_num>*(ptr+i+1))
			continue;
		else
		{
			max_num=*(ptr+i+1);
			max=i+1;
		}
	}
	
	return max;
}

