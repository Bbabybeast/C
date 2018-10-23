#include<stdio.h>
void func(double ar[],int n);
int main(void)
{
	double source[5]={1.1,2.2,3.3,4.4,5.5};
	
	func(source,5);
	
	return 0;
} 

void func(double input[],int m)
{
	int i;
	double output[m];
	
	for(i=0;i<m;i++)
	{
		output[i]=input[m-1-i];
		printf("%5.2f",output[i]);
	}
	printf("\n");
	
}
