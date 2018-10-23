#include<stdio.h>
void display(int [][5],int n);
void doubling(int [][5],int n);
int main(void)
{
	int source[][5]=
	{
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};
	
	display(source,3);
	doubling(source,3);
	display(source,3);
	
	return 0;
}

void display(int target[][5],int m)
{
	int i,j;
	
	for(i=0;i<m;i++)
	{
		for(j=0;j<5;j++)
			printf("%4d",*(*(target+i)+j));
		printf("\n");
	}
	printf("\n");
}

void doubling(int target[][5],int a)
{
	int i,j;
	
	for(i=0;i<a;i++)
	{
		for(j=0;j<5;j++)
			*(*(target+i)+j)*=2;
	}
}
