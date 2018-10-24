#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 100
void print_ar(int ar[], int n);			//打印数组元素的函数

int main(void)
{
    int i, j, tem;
    int digit[SIZE];

    srand((unsigned int)time(0));
    for (i = 0; i < SIZE; i++)
    {
        digit[i] = rand() % 10 + 1;
    }
    printf("The original number:\n");
	print_ar(digit,SIZE);
	for(i=0;i<SIZE;i++)
		for(j=i+1;j<SIZE;j++)
			if(digit[j]>digit[i])
			{
				tem=digit[i];
				digit[i]=digit[j];
				digit[j]=tem;
			 } 
	printf("\nThe numbers in reverse order:\n");
	print_ar(digit,SIZE);
	
	return 0;
}

void print_ar(int ar[],int n)
{
	int i;
	for(i=0;i<SIZE;i++)
	{
		printf("%4d",ar[i]);
		if((i+1)%10==0)
			printf("\n");
	} 
}
 
