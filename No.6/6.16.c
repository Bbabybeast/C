#include<stdio.h>
int main(void)
{
	float sum_Da,sum_De;
	int i;
	
	for(i=0,sum_Da=sum_De=100;sum_Da>=sum_De;i++)
	{
		sum_Da+=100*0.1;
		sum_De+=sum_De*0.05;
	}
	printf("%d years later,sum_Da<sum_De.\n",i);
	printf("Sum Daphne=%f,sum Deirdre=%f",sum_Da,sum_De);
	
	return 0;
}
