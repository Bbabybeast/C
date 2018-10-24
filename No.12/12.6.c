#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define SIZE 1000
#define TIMES 10
void print_ar(int ar[], int n);			//打印数组元素的函数
int main(void)
{
    int i, j, tem,next=0;
    int digit[SIZE];
	int count[10];
	
	while(next<TIMES)
	{
		for(i=0;i<10;i++)
			count[i]=0;
    	srand((unsigned int)next);
    	for (i = 0; i < SIZE; i++)
    	{
     	   digit[i] = rand() % 10 + 1;
     	   switch (digit[i])
     	   {
     	   		case 1:
					count[0]+=1;
     	   			break;
     	   		case 2:
					count[1]+=1;
     	   			break;
     	   		case 3:
					count[2]+=1;
     	   			break;
				case 4:
					count[3]+=1;
     	   			break;
				case 5:
					count[4]+=1;
     	   			break;
				case 6:
					count[5]+=1;
     	   			break;
				case 7:
					count[6]+=1;
     	   			break;
				case 8:
					count[7]+=1;
     	   			break;
				case 9:
					count[8]+=1;
     	   			break;
				case 10:
					count[9]+=1;
     	   			break;
			}
    	}
    print_ar(count,10);
	next+=1;
	}
	return 0;
}

void print_ar(int ar[],int n)
{
	int i;
	
	for(i=0;i<n;i++)
	{
		printf("%4d",ar[i]);
		if((i+1)%10==0)
			printf("\n");
	} 
}
 
