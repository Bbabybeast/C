#include<stdio.h>
void copy_ptr(double [],double[],int n);
int main(void)
{
	double source[7]={4.3,4.3,4.3,3.0,2.0,1.2,0.2};
	double target1[3];
	
	copy_ptr(target1,source+2,3);
	
	return 0;
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
