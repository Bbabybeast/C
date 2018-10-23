#include<stdio.h>
int max(int arr[],int n);
int main(void)
{
	int ar[40];
	int n;
	
	printf("Enter 5 numbers.\n");
	for(n=0;n<5;n++)
		scanf("%d",&ar[n]);
	printf("The max number is : %d\n",max(ar,5));
	
	return 0;
}

int max(int ptr[],int n)
{
	int i,max;
	
	max=*ptr; 
	for(i=1;i<n;i++)
	{
		if(max>*(ptr+i))
			continue;
		else
			max=*(ptr+i);
	}
	
	return max;
}
