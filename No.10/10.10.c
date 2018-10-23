#include<stdio.h>
void func(int [],int [],int [],int n);
int main(void)
{
	int source1[]={2,4,5,8};
	int source2[]={1,0,4,6};
	int target[4];
	
	func(source1,source2,target,4);
	
	return 0;
}

void func(int add1[],int add2[],int res[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		*(res+i)=*(add1+i)+*(add2+i);
		printf("%4d",*(res+i));
	}
	
}
