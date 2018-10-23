#include<stdio.h>
void copy_arr(double ar[],double arr[],int n);
void copy_ptr(double ar[],double arr[],int n);
void copy_ptrs(double ar[],double arr[],double * ptr);
int main(void)
{
	double source[5]={1.1,2.2,3.3,4.4,5.5};
	double target1[5];
	double target2[5];
	double target3[5];
	
	copy_arr(target1,source,5);
	copy_ptr(target2,source,5);
	copy_ptrs(target3,source,source+5);
	
	return 0;
}

void copy_arr(double target[],double source[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		target[i]=source[i];
		printf("%5.1f",target[i]);
	}
	printf("\n");
}

void copy_ptr(double target[],double source[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		*(target+i)=*(source+i);
		printf("%5.1f",target[i]);
	}
	printf("\n");
}

void copy_ptrs(double target[],double source[],double *end)
{
	int i;
	for(i=0;source+i<end;i++)
	{
		*(target+i)=*(source+i);
		printf("%5.1f",target[i]);
	}
	printf("\n");
}
